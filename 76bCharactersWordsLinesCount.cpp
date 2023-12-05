#include <iostream>
#include <string>
#include <sstream>

struct TextStats {
    int characters;
    int words;
    int lines;

    TextStats() : characters(0), words(0), lines(0) {}
};

TextStats countCharactersWordsLines(const std::string& input) {
    std::istringstream iss(input);
    std::string token;
    TextStats stats;

    while (std::getline(iss, token)) {
        stats.lines++;
        stats.characters += token.length();

        std::istringstream wordIss(token);
        std::string word;
        while (wordIss >> word) {
            stats.words++;
            stats.characters += word.length();
        }
    }

    return stats;
}

int main() {
    std::cout << "Enter text (press Ctrl+D or Ctrl+Z to end input):\n";

    std::string input;
    std::ostringstream oss;
    char ch;
    while (std::cin.get(ch)) {
        oss.put(ch);
    }
    input = oss.str();

    TextStats stats = countCharactersWordsLines(input);

    std::cout << "Character count: " << stats.characters << std::endl;
    std::cout << "Word count: " << stats.words << std::endl;
    std::cout << "Line count: " << stats.lines << std::endl;

    return 0;
}