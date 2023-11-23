#include <iostream>
using namespace std;

int main(){
	char c;
	cout << "Enter a char: ";
	cin >> c;

	if((c>='a' && c<='z') || (c>='A' && c<='Z')){
		cout << c << " is an alphabet character.\n";
	}
	else {
		cout << c << " is not an alphabet character.\n";
	}
	return 0;
}

