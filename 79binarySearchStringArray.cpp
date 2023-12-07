#include <iostream>
#include <cstring>

static int binsearch(char *str[], int max, const char *value);

int main() {
    char *strings[] = {"bmw", "ford", "mercedes", "toyota"};
    const int asize = sizeof(strings) / sizeof(strings[0]);

    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < asize; ++i) {
        std::cout << i << " " << strings[i] << std::endl;
    }
    std::cout << std::endl;

    const char *search1 = "bmw";
    int result1 = binsearch(strings, asize, search1);
    if (result1 != -1) {
        std::cout << "'" << search1 << "' was found at position: " << result1 << std::endl;
    } else {
        std::cout << "'" << search1 << "' was not found..." << std::endl;
    }

    const char *search2 = "bentley";
    int result2 = binsearch(strings, asize, search2);
    if (result2 != -1) {
        std::cout << "'" << search2 << "' was found at position: " << result2 << std::endl;
    } else {
        std::cout << "'" << search2 << "' was not found..." << std::endl;
    }

    return 0;
}

static int binsearch(char *str[], int max, const char *value) {
    int position;
    int begin = 0;
    int end = max - 1;
    int cond = 0;

    while (begin <= end) {
        position = (begin + end) / 2;

        if ((cond = strcmp(str[position], value)) == 0) {
            return position;
        } else if (cond < 0) {
            begin = position + 1;
        } else {
            end = position - 1;
        }
    }
    return -1;
}