#include <iostream>
#include <fstream>
#include <string>

struct Node {
    std::string data;
    Node* next;

    Node(const std::string& value) : data(value), next(nullptr) {}
};

void insertionSort(Node*& head, const std::string& value) {
    Node* newNode = new Node(value);

    if (!head || value < head->data) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next && value > temp->next->data) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void printList(const Node* head) {
    while (head) {
        std::cout << head->data << std::endl;
        head = head->next;
    }
}

void deleteList(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;
    std::string name;

    std::ifstream inputFile("cars.txt");

    while (std::getline(inputFile, name)) {
        insertionSort(head, name);
    }

    inputFile.close();

    std::cout << "Sorted Names: " << std::endl;
    printList(head);

    deleteList(head);

    return 0;
}