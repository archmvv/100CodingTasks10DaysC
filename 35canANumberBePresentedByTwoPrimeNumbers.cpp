#include <iostream>
using namespace std;

int checkPrime(int n){
    int isPrime = 1;

    for (int i = 2; i < n/2; i++)
    {
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int main(){
    int n, flag = 0;
    cout << "Enter a whole positive number: ";
    cin >> n;

    for (int i = 2; i <= n/2; i++)
    {
        if(checkPrime(i) == 1){
            if(checkPrime(n - i) == 1){
                cout << n << " = " << i << " + " << n - i << "\n";
                flag = 1;
            }
        }
    }
    
    if(flag == 0){
        cout << n << " cannot be presented as the sum of two Prime numbers.\n";
    }

    return 0;
}