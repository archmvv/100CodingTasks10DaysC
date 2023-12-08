#include <iostream>
using namespace std;

void bubbleSort(int a[], int size);

int main(){
    int arr[10] = {10, 4, 1, 2, 7, 6, 9, 8, 3, 5};
    int asize = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting:\n";
    for (int i = 0; i < asize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, asize);

    cout << "After: \n";
    for (int i = 0; i < asize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

void bubbleSort(int a[], int size){
    int switched = 1;
    int hold = 0;

    size -=1;

    for (int i = 0; i < size && switched; i++){
        switched = 0;
        for (int  j = 0; j < size - i; j++){
            if(a[j] > a[j + 1]){
                switched = 1;
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    } 
}