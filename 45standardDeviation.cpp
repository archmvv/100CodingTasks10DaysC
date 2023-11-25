#include <iostream>
#include <cmath>
using namespace std;

double standardDeviation(double data[]){
    double sum = 0.0;
    double mean;
    double standardDeviation = 0.0;

    for (int i = 0; i < 10; i++)
    {
        sum += data[i];
    }
    mean = sum / 10;

    for (int i = 0; i < 10; i++)
    {
        standardDeviation += pow(data[i] - mean, 2);
    }

    return sqrt(standardDeviation / 10);
}

int main(){
    double data[10];

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> data[i];
    }
    cout << "\nStandard deviation = " << standardDeviation(data) << endl;

    return 0;
}