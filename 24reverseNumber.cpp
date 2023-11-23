#include <iostream>
using namespace std;

int main(){
    int n, remainder;
    int reversedNumber = 0;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0){
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /=10;
    }

    cout << "Reversed: " << reversedNumber;

    return 0;
}