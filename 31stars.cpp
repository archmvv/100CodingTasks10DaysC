#include <iostream>
using namespace std;

int main(){
    int number = 0;

    cout << "Enter number of rows with asterixes: ";
    cin >> number;

    string asterix = "*";
    string result = asterix;
    for (int i = 1; i <= number; i++)
    {
        cout << result;
        result += asterix;
        cout << "\n";
    }
    
    return 0;
}