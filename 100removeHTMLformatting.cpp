#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

#define IN 0
#define OUT 1

int main(){
    int c = 0;
    int state = OUT;
    int tstate = OUT;
    char tagbuff[2048];
    char *ptr1 = NULL;

    while ((c = getchar()) != EOF){
        if (c == '<' || c == '&'){
            state = IN;
            ptr1 = tagbuff;
        }

        if (state == IN){
            *ptr1++ = c;
        }

        if (c == '>' || c == ';'){
            state = OUT;
            *ptr1++ = '\0';
            if (strstr(tagbuff, "<s") != nullptr || strstr(tagbuff, "<S") != nullptr){
                tstate = IN;
            }
            if (strstr(tagbuff, "</") != nullptr){
                tstate = OUT;
            }
            if (strstr(tagbuff, "nbsp") != nullptr || strstr(tagbuff, "NBSP") != nullptr){
                cout << " ";
            }
        }

        if (state == OUT && tstate == OUT && c != '>' && c != ';'){
            cout << c;
        }
    }

    return 0;
}