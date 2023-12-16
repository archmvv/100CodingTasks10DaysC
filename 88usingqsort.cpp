#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

static int cmpr(const void *a, const void *b){
    return strcmp(*(char**)a, *(char**)b);
}

void sortstrarr(void *array, unsigned n){
    qsort(array, n, sizeof(char *), cmpr);
}


int main(){
    char line[1024];
    char *line_arr[1024];
    int i = 0;
    int j = 0;

    while(fgets(line, 1024, stdin) != NULL){
        if(i < 1024){
            line_arr[i++] = strdup(line);
        }else{
            break;
        }
    }

    sortstrarr(line_arr, i);

    while(j < i){
        cout << line_arr[j++] << " ";
    }

    return 0;
}