#include <iostream>
using namespace std;

const int SIZE = 26;

class Stack {
    char stck[SIZE];
    int tos;
public:
    void init();
    void push(char ch);
    char pop();    
};

void Stack::init(){
    tos = 0;
}

void Stack::push(char ch){
    if(tos == SIZE){
        cout << "Stack is full!";
        return;
    }
    stck[tos] = ch;
    tos++;
}

char Stack::pop(){
    if(tos == 0){
        cout << "Stack is empty!";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main(){
    Stack s1, s2;

    s1.init();
    s2.init();

    s1.push('a');
    s2.push('b');
    s1.push('c');
    s2.push('d');
    s1.push('e');
    s2.push('f');

    for (int i = 0; i < 3; i++)
    {
        cout << s1.pop() << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << s2.pop() << " ";
    }
    cout << endl;
    
    return 0;
}
