#include <iostream>
using namespace std;

int main(){
    int num;
    double *data;

    cout << "Enter the number of items: ";
    cin >> num;


    data = (double*) calloc(num, sizeof(double));

    if(data == NULL){
        cout << "Memory allocation error.\n";
        exit(1);
    }

    cout << "\n";

    for (int i = 0; i < num; i++)
    {
        cout << "#" << i + 1  << ": ";
        cin >> *(data + i);
    }

    for (int i = 0; i < num; i++)
    {
        if(*data < *(data + i)){
            *data = *(data + i);
        }
    }
    
    cout << "Max = " << *data << " \n";
    return 0;
}