#include <iostream>
#include <string>
#include <sstream>

int wordCount(const std::string& input){
    std::istringstream iss(input);
    std::string word;
    int count = 0;

    while (iss >> word){
        count++;
    }

    return count;
}

int main(){
    std::cout << "Enter a sentence: ";
    std::string input;
    std:: getline(std::cin, input);

    int count = wordCount(input);
    std::cout << "Word count: " << count << std::endl;

    return 0;
}

