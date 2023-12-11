#include <iostream>
using namespace std;

void isort(float arr[], int n);
int findMin(float arr[], int b, int n);

int main(){
    float arr1[5] = {4.6, 6.3, 2.7, 8.9, 1.1};
    float arr2[5] = {4.3, 6.7, 2.8, 8.9, 1.1};

    int arrSize = sizeof(arr2) / sizeof(arr2[0]);

    isort(arr2, arrSize);

    cout << "Before\tAfter\n------------------\n";

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr1[i] << "\t" << arr2[i];
        cout << "\n";
    }

    return 0;
}

int findMin(float arr[], int b, int n){
    int f = b;
    for (int i = b + 1; i < n; i++){
        if(arr[i] < arr[f]){
            f = i;
        }
    }
    return f;
}

void isort(float arr[], int n){
    int w{};
    float sm;

    for (int i = 0; i < n - 1; i++){
        w = findMin(arr, i, n);
        sm = arr[w];
        arr[w] = arr[i];
        arr[i] = sm;
    }
}