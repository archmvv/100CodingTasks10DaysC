#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cerr << "Fibonacci sequence is not defined for negative numbers." << endl;
        return 1; 
    }

    cout << "Fibonacci sequence up to " << number << ": ";
    for (int i = 0; i < number; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
