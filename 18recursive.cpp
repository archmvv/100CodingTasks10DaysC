#include <iostream>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cerr << "Factorial is not defined for negative numbers." << std::endl;
        return 1;
    }
    long long result = factorial(number);
    std::cout << "Factorial of " << number << " is: " << result << std::endl;

    return 0;
}
