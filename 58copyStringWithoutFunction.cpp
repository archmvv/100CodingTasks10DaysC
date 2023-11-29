#include <iostream>
#include <cstring>
#include <string>
using namespace std;


int main(){
    string s1{};
    string s2{};
    int i{};

    cout << "Enter a string to copy: ";
    getline(cin, s1);

    for (i = 0; i < s1.length(); i++)
    {
        s2 += s1[i];
    }

    cout << "Copied string: " << s2 << endl;

    //The assignment operator in c++ performs a deep copy
    // string anotherCopy{};
    // anotherCopy = s1;

    // cout << "Copied string: " << anotherCopy << endl;
    // anotherCopy += "aaa";

    // cout << "Copied string: " << s1 << endl;
    // cout << "Copied string: " << anotherCopy << endl; 

    return 0;
}