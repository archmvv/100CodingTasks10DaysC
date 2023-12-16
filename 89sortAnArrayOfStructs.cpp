#include <iostream>
#include <algorithm>

struct Item {
    int number;
    std::string name;
};

bool sortByNumber(const Item &a, const Item &b) {
    return a.number < b.number;
}

bool sortByName(const Item &a, const Item &b) {
    return a.name < b.name;
}

void printArray(const Item arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i].number << " " << arr[i].name << "\n";
    }
    std::cout << std::endl;
}

int main() {
    const int SIZE = 5;
    Item array[SIZE];

    array[0] = {3, "E"};
    array[1] = {4, "D"};
    array[2] = {5, "C"};
    array[3] = {1, "B"};
    array[4] = {2, "A"};

    std::cout << "Unsorted Array: \n";
    printArray(array, SIZE);

    std::cout << "Sorted Array by Number: \n";
    std::sort(array, array + SIZE, sortByNumber); 
    printArray(array, SIZE);

    std::cout << "Sorted Array by Name: \n";
    std::sort(array, array + SIZE, sortByName);  
    printArray(array, SIZE);

    return 0;
}