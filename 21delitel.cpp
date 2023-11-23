#include <iostream>
using namespace std;

int main(){
    int n1 = 0;
    int n2 = 0;
    int gcd = 1;

    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    
    cout << "GCD - " << gcd << endl;

    return 0;
}