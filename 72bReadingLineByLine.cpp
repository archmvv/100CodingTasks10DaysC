#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string s;
    ifstream fileRead("data.dat");

    while(getline(fileRead, s)){

        cout << s << endl;
        s += "+";
        cout << s << endl;
    }

    fileRead.close();

    return 0;
}
