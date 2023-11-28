#include <iostream>
using namespace std;

int main(){
    char line[150];
    int total, digits, spaces;

    total = digits = spaces = 0;

    cout << "Enter a string: ";
    cin.getline(line, sizeof(line));

    for (int i = 0; line[i] != '\0'; i++)
    {
        if(line[i] >='0' && line[i] <= '9'){
            digits++;
        }
        else if (line[i] == ' ')
        {
            spaces++;
        }
        total++;
    }

    cout << "Chars: " << total << "\n";
    cout << "Numbers: " << digits << "\n";
    cout << "Spaces: " << spaces << "\n";

    return 0;
}