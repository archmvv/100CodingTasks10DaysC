#include <iostream>
using namespace std;
 
struct Node {
    int data;
    struct Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
 
struct LinkedList{
    Node* head;
    LinkedList(){ 
        head = NULL; 
    }
 
    void reverse(){
        Node* current = head;
        Node *prev = NULL; 
        Node *next = NULL;
 
        while (current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
 
    void printList(){
        struct Node* temp = head;
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
 
    void push(int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
 
int main(){
    LinkedList list;
    list.push(34);
    list.push(14);
    list.push(17);
    list.push(65);
    list.push(84);
    list.push(93);
    list.push(42);
    list.push(56);
 
    cout << "Provided linked list: \n";
    list.printList();
 
    list.reverse();
 
    cout << "\nReversed linked list: \n";
    list.printList();
    return 0;
}