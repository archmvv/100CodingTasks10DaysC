#include <iostream>
using namespace std;

int main(){
	int number;

	cout << "Enter a number: ";
	cin >> number;

	if(number > 0){
	cout << number << " is a positive number\n";
	}
	else if(number = 0){
	cout << "You entered 0.\n";
	}
	else {
	cout << number << " is a negative number.\n";
	}
	return 0;
}
