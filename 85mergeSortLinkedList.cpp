#include <iostream>
#include <cstdlib>
using namespace std;

struct node{
    int number;
    struct node* next;
};

struct node *addNode(int number, struct node *next);
struct node *mergesort(struct node *head);
struct node *merge(struct node *headOne, struct node *headTwo);

int main(){
    struct node *head;
    struct node *current;
    struct node *next;
    int test[] = {7, 4, 2, 6, 1, 9, 5, 8, 3, 0};

    int arrSize = sizeof(test) / sizeof(test[0]);

    head = NULL;

    for (int i = 0; i < arrSize; i++){
        head = addNode(test[i], head);
    }
    
    head = mergesort(head);

    cout << "Before  After\n";
    int j = 0;
    for (current = head; current != NULL; current = current->next){
        cout << test[j++] << "  " << current->number << "\n";
    }
    
    for (current = head; current != NULL; current = next){
        next = current->next, free(current);
    }
    
    return 0;
}

struct node *addNode(int number, struct node *next){
    struct node *tnode;

    tnode = (struct node*)malloc(sizeof(*tnode));

    if(tnode != NULL){
        tnode->number = number;
        tnode->next = next;
    }

    return tnode;
}

struct node *mergesort(struct node *head){
    struct node *headOne;
    struct node *headTwo;

    if((head == NULL) || (head->next == NULL)){
        return head;
    }

    headOne = head;
    headTwo = head->next;

    while ((headTwo != NULL) && (headTwo->next != NULL)){
        head = head->next;
        headTwo = head->next->next;
    }

    headTwo = head->next;
    head->next = NULL;

    return merge(mergesort(headOne), mergesort(headTwo));
}

struct node *merge(struct node *headOne, struct node *headTwo){
    struct node *headThree;

    if(headOne == NULL){
        return headTwo;
    }

    if(headTwo == NULL){
        return headOne;
    }

    if(headOne->number < headTwo->number){
        headThree = headOne;
        headThree->next = merge(headOne->next, headTwo);
    }else{
        headThree = headTwo;
        headThree->next = merge(headOne, headTwo->next);
    }

    return headThree;
}



