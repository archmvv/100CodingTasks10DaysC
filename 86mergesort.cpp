#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void merge(vector<int>& a, int low, int mid, int high);
void mergeSort(vector<int>& a, int low, int high);

int main() {
    const int MAXARRAY = 10;
    vector<int> array(MAXARRAY);

    for (int i = 0; i < MAXARRAY; i++) {
        array[i] = rand() % 100;
    }

    cout << "Before sorting: \n";
    for (int i = 0; i < MAXARRAY; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    mergeSort(array, 0, MAXARRAY - 1);

    cout << "After sorting: \n";
    for (int i = 0; i < MAXARRAY; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

void mergeSort(vector<int>& a, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}

void merge(vector<int>& a, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; i++)
        left[i] = a[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = a[mid + 1 + j];

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            a[k] = left[i];
            i++;
        } else {
            a[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = right[j];
        j++;
        k++;
    }
}