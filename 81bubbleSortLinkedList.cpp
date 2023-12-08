#include <iostream>
#include <cstdlib>
using namespace std;

struct lnode {
    int data;
    struct lnode* next;
} *head, *visit;

void listAdd(struct lnode** q, int num);
void listBubbleSort();
void listPrint();

int main(){
    struct lnode *newNode = NULL;
    int MAX = 10;

    for (int i = 0; i < MAX; i++){
        listAdd(&newNode, (rand() % 100));
    }

    head = newNode;
    cout << "Before sorting: \n";
    listPrint();
    cout << "After: \n";
    listBubbleSort();
    listPrint();

    return 0;
}

void listAdd(struct lnode** q, int num) {
    struct lnode* tmp = *q;

    if (*q == NULL) {
        *q = new lnode;
        tmp = *q;
    } else {
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = new lnode;
        tmp = tmp->next;
    }

    tmp->data = num;
    tmp->next = NULL;
}

void listPrint(){
    visit = head;

    while (visit != NULL){
        cout << visit->data << " ";
        visit = visit->next;
    }
    cout << "\n";
}

void listBubbleSort() {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    struct lnode* current;
    struct lnode* nextNode = nullptr;
    bool swapped;

    do {
        swapped = false;
        current = head;

        while (current->next != nextNode) {
            if (current->data > current->next->data) {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true;
            }
            current = current->next;
        }
        nextNode = current;
    } while (swapped);
}