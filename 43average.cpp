#include <iostream>
using namespace std;

int main(){
    int n;
    float num[100], sum = 0.0, average;

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
        sum += num[i];
    }

    average = sum / n;
    cout << "Average: " << average << endl;

    return 0;
}