#include <iostream>
using namespace std;

int main(){
	int n = 0;
	int sum = 0;

	cout << "Enter an integer: ";
	cin >> n;

	for(int i=1; i<=n; i++){
		sum += i;
	}

	cout << "Sum: " << sum << "\n";

	return 0;
}
