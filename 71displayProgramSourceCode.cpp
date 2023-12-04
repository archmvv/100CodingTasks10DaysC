#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream sourceFile(__FILE__);

    if(sourceFile.is_open()){
        string line;
        while (getline(sourceFile, line)){
            cout << line << endl;
        }

        sourceFile.close();
    }else {
        cerr << "Error opening the source code file.";
    }

    return 0;
}