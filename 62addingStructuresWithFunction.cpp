#include <iostream>
using namespace std;

typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2){
    complex temp;

    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;

    return(temp);
}

complex add(complex n1, complex n2);

int main(){

    complex n1, n2, temp;
    cout << "Enter the first complex number \n";
    cout << "Enter the real and imaginary part: ";
    cin >> n1.real >> n1.imag;

    cout << "Enter the second complex number \n";
    cout << "Enter the real and imaginary part: ";
    cin >> n2.real >> n2.imag;

    temp = add(n1, n2);
    cout << "Sum = " << temp.real << " " << temp.imag << "i";

    return 0;
}

