#include <iostream>
using namespace std;

int main(){
	char c;
	int isVowelLowercase;
	int isVowelUppercase;

	cout << "Enter a char: ";
	cin >> c;

	isVowelLowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	isVowelUppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if(isVowelLowercase || isVowelUppercase){
	cout << "The entered char is a vowel.\n";
	}
	else {
	cout << "The entered char is a consonant\n";
	}
	return 0;
}
