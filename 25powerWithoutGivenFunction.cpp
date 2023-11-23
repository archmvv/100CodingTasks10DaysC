#include <iostream>
using namespace std;

int main(){
    int base = 0;
    int exponent = 0;

    long long result = 1;

    cout << "Enter an integer: ";
    cin >> base;

    cout << "Enter a power: ";
    cin >> exponent;

    while(exponent != 0){
        result *=base;
        --exponent;
    }

    cout << "Result: " << result;

    return 0;
}