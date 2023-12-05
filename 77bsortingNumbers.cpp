#include <iostream>
#include <fstream>

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void insertionSort(Node*& head, int value) {
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
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
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
    int number;

    std::ifstream inputFile("numbers.txt");


    while (inputFile >> number) {
        insertionSort(head, number);
    }

    inputFile.close();

    std::cout << "Original List: ";
    printList(head);
    deleteList(head);

    return 0;
}