#include <iostream>
#include <cmath>
using namespace std;

int convertDecimalToOctal(int decimalNumber){
    int octalNumber = 0, i = 1;

    while(decimalNumber != 0){
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}

long long convertOctalToDecimal(int octalNumber){
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0){
        decimalNumber += (octalNumber % 10) * pow(8, i);
        i++;
        octalNumber /= 10;
    }
    i = 1;

    return decimalNumber;
}

int main(){
    int decimalNumber;
    int octalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    cout << decimalNumber << " (decimal) = " << convertDecimalToOctal(decimalNumber) << " (octal) \n";

    cout << "Enter an octal number: ";
    cin >> octalNumber;
    cout << octalNumber << " (octal) = " << convertOctalToDecimal(octalNumber) << " (decimal) \n";

    return 0;
}