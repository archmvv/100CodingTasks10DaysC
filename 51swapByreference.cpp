#include <iostream>
using namespace std;

void cyclicSwap(int *a, int *b, int *c){
    int temp;

    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}

int main(){
    int a, b, c;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    cout << "Before: \na = " << a << "\nb = " << b << "\nc = " << c << "\n";

    cyclicSwap(&a, &b, &c);

    cout << "After: \na = " << a << "\nb = " << b << "\nc = " << c << "\n";

    return 0;
}