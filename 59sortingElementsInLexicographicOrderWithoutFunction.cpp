#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string str[10]; 
    string temp[50];

    cout << "Enter ten words: ";

    for (int i = 0; i < 10; i++)
    {
        getline(cin, str[i]);
    }

    cout << "Before sorting: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << str[i] << endl;
    }
    
    //Sorting lexicographically using bubble sort
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (str[j] > str[j + 1]) {
                string temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    
    cout << "After sorting: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << str[i] << endl;
    }
    return 0;
}

