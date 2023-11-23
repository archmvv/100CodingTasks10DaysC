#include <iostream>
using namespace std;

int main(){
	int n =0;
	long long factorial = 1;
	cout << "Enter n: ";
	cin >> n;

	if(n < 0){
		cout << "Negative n. Error!\n";
	}
	else {
		for(int i = 1; i <= n; i++){
		factorial *= i;
	}
	cout << "Factorial " << n << " = " << factorial << "\n";
	}

	return 0;
}
