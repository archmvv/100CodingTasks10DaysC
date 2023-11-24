#include <iostream>
using namespace std;

int calculateFactorial(int n){
    if(n > 1){
        return n * calculateFactorial(n-1);
    }else {
        return 1;
    }
}

int main(){
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    cout << "Factorial of " << number << " is " << calculateFactorial(number) << endl;
    return 0;
}