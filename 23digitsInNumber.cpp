#include <iostream>
using namespace std;

int main(){
    long long n;
    int count = 0;

    cout << "Enter a number: ";
    cin >> n;

    while(n != 0){
        n /=10;
        count++;
    }

    cout << "Number of digits: " << count;
    return 0;
}