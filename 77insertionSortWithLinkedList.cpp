#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void insertHead(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void printList(const Node* head) {
    while (head) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

void insertionSort(Node*& head) {
    if (!head || !head->next) {
        return; 
    }

    Node* sorted = nullptr;

    while (head) {
        Node* current = head; 
        head = head->next;    

        if (!sorted || current->data < sorted->data) {
            current->next = sorted;
            sorted = current;
        } else {
            Node* temp = sorted;
            while (temp->next && temp->next->data < current->data) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
    }

    head = sorted; 
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

    insertHead(head, 5);
    insertHead(head, 2);
    insertHead(head, 9);
    insertHead(head, 1);
    insertHead(head, 6);

    std::cout << "Original List: ";
    printList(head);

    insertionSort(head);

    std::cout << "Sorted List: ";
    printList(head);

    deleteList(head);

    return 0;
}