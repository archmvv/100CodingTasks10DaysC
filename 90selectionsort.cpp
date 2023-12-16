#include <iostream>
using namespace std;
 
void selectionSort(int arr[], int n){
    int min_idx;
    for (int i = 0; i < n - 1; i++){
        min_idx = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i){
            swap(arr[min_idx], arr[i]);
        }
    }
}
 
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main(){
    int arr[] = {90, 84, 33, 29, 70, 65, 44, 16, 50, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Unsorted Array: \n";
    printArray(arr, n);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}