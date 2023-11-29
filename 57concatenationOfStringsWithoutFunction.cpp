#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s1[100];
    char s2[100];

    int i{};
    int j{};

    cout << "Enter the first string: ";
    cin.getline(s1, sizeof(s1));

    cout << "Enter the second string: ";
    cin.getline(s2, sizeof(s2));

    for (i = 0; s1[i] != '\0'; i++);

    for (j = 0; s2[j] != '\0'; j++, i++){
        s1[i] = s2[j];
    }

    s1[i] = '\0';
    cout << "Result: " << s1 ;

    //cout << "Result: " << strcat(s1, s2);

    return 0;    
}