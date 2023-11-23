#include <iostream>
using namespace std;

int main(){
	double a = 0;
	double b = 0;

	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;
	
	a = a - b;
	b = a + b;
	a = b - a;

	cout << "After swapping, A = " << a << "\n";
	cout << "After swapping, B = " << b << "\n";

	return 0;
}
