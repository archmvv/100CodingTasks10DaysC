#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fileOut("test.txt");

    if(!fileOut){
        cout << "Error opening the file." << endl;
        return 1;
    }

    fileOut << "Hello world!\n";
    fileOut << "One more line.\n";
    fileOut.close();
    ifstream fileIn("test.txt");
    fileIn.unsetf(ios::skipws);

    if (!fileIn){
        cout << "Error opening the file.";
        return 1;
    }

    char ch;
    while (!fileIn.eof()){
        fileIn >> ch;
        cout << ch;
    }
    
    fileIn.close();

    return 0;    
}