#include <iostream>
#include <cstdlib>
using namespace std;

void heapsort(int ar[], int len);

void heapbubble(int pos, int ar[], int len);

int main(){
    const int MAXARRAY = 10;
    int array[MAXARRAY];

    for (int i = 0; i < MAXARRAY; i++){
        array[i] = rand() % 100;
    }

    cout << "Before: \n";
    for (int i = 0; i < MAXARRAY; i++){
        cout << array[i] << " ";
    }
    cout << "\n";

    heapsort(array, MAXARRAY);

    cout << "After: \n";
    for (int i = 0; i < MAXARRAY; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
    
    return 0;
}

void heapbubble(int pos, int array[], int len){
    int z = 0;
    int max = 0;
    int tmp = 0;
    int left = 0;
    int right = 0;

    z = pos;
    for (; ; ){
        left = 2 * z + 1;
        right = left + 1;

        if(left >= len){
            return;
        }else if(right >= len){
            max = left;
        }else if (array[left] > array[right]){
            max = left;
        }else{
            max = right;
        }

        if(array[z] > array[max]){
            return;
        }

        tmp = array[z];
        array[z] = array[max];
        array[max] = tmp;
        z = max;
    }
}

void heapsort(int array[], int len){
    int tmp = 0;

    for (int i = len/2; i >= 0; i--){
        heapbubble(i, array, len);
    }

    for (int i = len - 1; i > 0; i--){
        tmp = array[0];
        array[0] = array[i];
        array[i] = tmp;
        heapbubble(0,array,i);
    }
}