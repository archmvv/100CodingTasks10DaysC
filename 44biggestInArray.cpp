#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

int main(){
    int n;
    double num[100], max = DBL_MIN;

    cout << "Enter the number of items: ";
    cin >> n;

    while(n > 100 || n <= 0){
        cout << "The number must be in range [1, 100]\n";
        cout << "Enter the number of items again: ";
        cin >> n;
    }

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "#: ";
        cin >> num[i];
        if(max < num[i]){
            max = num[i];
        }
    }

    cout << "Max: " << max << endl;

    return 0;
}