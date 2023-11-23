#include <iostream>
using namespace std;

int main(){
	int number;
	cout << "Enter an integer: ";
	cin >> number;
	if(number % 2 == 0){
	cout << number << " - even\n";
	}
	else{
	cout << number << " - odd\n";
	}
	return 0;
}
