#include <iostream>
using namespace std;

int main(){
	char operatorCalc;
	double firstNumber, secondNumber;

	cout << "Enter an operator (+, -, *, /): ";
	cin >> operatorCalc;

	cout << "Enter two operands: ";
	cin >> firstNumber >> secondNumber;

	switch(operatorCalc){
	case '+':
		cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber;
		break;
	case '-':
		cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber;
                break;
	case '*':
 		cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber;
		break;
	case '/':
		if(secondNumber != 0) {
		cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber;
		break;
		}
		else {
		cout << "Division by zero error!";
		break;
		}
	default:
		cout << "Invalid operator";
	}
	
	cout << "\n";
	return 0;
}
