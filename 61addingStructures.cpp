#include <iostream>
using namespace std;

struct Distance {
    int steps;
    float m;
} d1, d2, sumOfDistances;

int main(){
    cout << "Structure #1\n";
    cout << "The number of steps: ";
    cin >> d1.steps;
    cout << "The number of meters: ";
    cin >> d1.m;

    cout << "Structure #2\n";
    cout << "The number of steps: ";
    cin >> d2.steps;
    cout << "The number of meters: ";
    cin >> d2.m;

    sumOfDistances.steps = d1.steps + d2.steps;
    sumOfDistances.m = d1.m + d2.m;

    cout << "Result: \n";
    cout << "Steps: ";
    cout << sumOfDistances.steps << endl;
    cout << "Meters: ";
    cout << sumOfDistances.m;

    return 0;
}