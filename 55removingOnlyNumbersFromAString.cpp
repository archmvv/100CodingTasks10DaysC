#include <iostream>
using namespace std;

int main(){
    char line[150];

    cout << "Enter a string: ";
    cin.getline(line, sizeof(line));

    int i = 0, j = 0;
    while (line[i] != '\0') {
        if (!(line[i] >= '0' && line[i] <= '9')) {
            line[j++] = line[i];
        }
        i++;
    }

    line[j] = '\0'; // Add null character at the end to terminate the string
    cout << "Result: " << line << "\n";

    return 0;
}