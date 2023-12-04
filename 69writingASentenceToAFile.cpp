#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    cout << "Enter a sentence: ";
    string sentence{};
    getline(cin, sentence);

    ofstream outputFile("output.txt");

    if(outputFile.is_open()){
        outputFile << sentence << endl;

        outputFile.close();

        cout << "Sentence has been written to a file." << endl;
    }else {
        cout << "Error opening the file for writing." << endl;
    }

    return 0;
}