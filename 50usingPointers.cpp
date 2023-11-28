#include <iostream>
using namespace std;

int main(){
    int data[5];

    cout << "Enter 5 numbers: ";
    
    for (int i = 0; i < 5; i++)
    {
        cin >> *(data + i);
    }

    cout << "Array: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << *(data + i) << "\n";
    }
    
    return 0;
}