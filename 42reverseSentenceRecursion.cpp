#include <iostream>
using namespace std;

void reverseSentence(){
    char c;
    cin.get(c);

    if( c != '\n'){
        reverseSentence();
        cout << c;
    }
}

int main(){
    cout << "Enter a sentence: ";
    reverseSentence();
    cout << "\n";

    return 0;
}