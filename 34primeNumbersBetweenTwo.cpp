#include <iostream>
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

void separator(){
    cout << "\n";
    for (int i = 0; i < 80; i++)
    {
        cout << "*";
    }
    cout << "\n";
}

int main(){
    int n1, n2, flag;

    cout << "Enter two positive integers: ";
    cin >> n1 >> n2;
    cout << "Prime numbers between them: ";
    separator();

    for (int i = n1 + 1; i < n2; i++)
    {
        flag = checkPrimeNumber(i);
        if(flag == 1){
            cout << i << " ";
        }
    }

    separator();
    return 0;
}