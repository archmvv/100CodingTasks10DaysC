#include <iostream>
#include <cmath>
using namespace std;

int checkPrimeNumber(int n){
    int flag = 1;

    for (int i = 2; i <= n/2; i++)
    {
        if(n % i == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

int checkArmstrongNumber(int number){
    int flag, originalNumber, remainder, result = 0, n = 0;

    originalNumber = number;

    while(originalNumber != 0){
        originalNumber /= 10;
        n++;
    }

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if(result == number){
        flag = 1;
    }else {
        flag = 0;
    }
    return flag;
}

int main(){

    int n, flag;
    cout << "Enter a positive number: ";
    cin >> n;


    flag = checkPrimeNumber(n);
    if(flag == 1){
        cout << n << " is a Prime number.\n";
    }else{
        cout << n << " is not a Prime number.\n";
    }

    flag = checkArmstrongNumber(n);
    if(flag == 1){
        cout << n << " is an Armstrong number.\n";
    }else{
        cout << n << " is not an Armstrong number.\n";
    }

    return 0;
}

