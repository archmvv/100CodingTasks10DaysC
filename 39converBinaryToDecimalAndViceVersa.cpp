#include <iostream>
#include <cmath>
using namespace std;

int convertBinaryToDecimal(long long n){
    int decimalNumber = 0;
    int i = 0;
    int remainder;

    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2,i);
        i++;
    }
    return decimalNumber;
}

long long convertDecimalToBinary(int n){
    long long binaryNumber = 0;
    int remainder;
    int i = 1;
    int step = 1;

    while (n != 0)
    {
        remainder = n % 2;
        cout << "Step " << step++ << ": " << n << " / 2, Remainder = " << remainder << ", Quotient = " << n/2 << endl;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}

int main(){
    long long n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << n << " (binary) = " << convertBinaryToDecimal(n) << " (decimal) \n";

    cout << "Enter a decimal number: ";
    cin >> n;
    cout << n << " (decimal) = \n" << convertDecimalToBinary(n) << " (binary) \n";

    return 0;
}