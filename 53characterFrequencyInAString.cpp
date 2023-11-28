#include <iostream>
using namespace std;

int main(){
    char str[1000], ch;
    int frequency = 0;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Enter a char: ";
    cin >> ch;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(ch == str[i]){
            frequency++;
        }
    }
    
    cout << "Char's frequency = " << frequency << "\n";

    return 0;
}