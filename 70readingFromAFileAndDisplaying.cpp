#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream inputFile("output.txt");

    if(inputFile.is_open()){
        string line;
        while (getline(inputFile, line)){
            cout << line << endl;
        }

        inputFile.close();
    }else {
        cerr << "Error opening the file for reading." << endl;
    }

    return 0;
}