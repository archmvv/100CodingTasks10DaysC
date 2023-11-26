#include <iostream>
using namespace std;

int main(){
    int array[10] = {0, 3, 8, 12, 17, 45, 55, 78, 85, 90};

    int left = 0;
    int right = 9;
    int middle = 0;
    int number = 0;

    bool bSearch = false;
    

    cout << "Array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\nSearch for number: ";
    cin >> number;

    while (bSearch == false && left <= right)
    {
        middle = (left + right) / 2;

        if(number == array[middle]){
            bSearch = true;
            cout << "** Found at position "<< middle << "! **\n";
        }else {
            if(number < array[middle]){
                right = middle - 1;
            }
            if(number > array[middle]){
                left = middle + 1;
            }
        }
    }

    if(bSearch == false){
            cout << "-- Not found --\n";
        }

    return 0;
}