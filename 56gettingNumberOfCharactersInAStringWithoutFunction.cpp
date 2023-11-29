#include <iostream>
#include <string>
using namespace std;

int main(){
    int i{};
    string s{};

    cout << "Enter a string: ";
    getline(cin, s);

    for (i = 0; s[i] != '\0'; i++);

    cout << "Length: " << i << "\n";

    //cout << "Length: " << s.length() << "\n";

    return 0;
}