#include <iostream>
using namespace std;

int calculateSumRecursively(int n){
    if(n != 0){
        return n + calculateSumRecursively(n-1);
    }else {
        return n;
    }
}

int main(){
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    cout << "The sum of all positive numbers up to " << number << " is " << calculateSumRecursively(number);
    return 0;
}