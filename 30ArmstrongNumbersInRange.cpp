#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int low, high, temp1, temp2, remainder, n=0, result = 0;

    cout << "Enter low and high limits: ";
    cin >> low >> high;

    cout << "Armstrong numbers: ";


    for (int i = low + 1; i < high; i++)
    {
        temp1 = i;
        temp2 = i;

        while (temp1 != 0)
        {
            temp1 /= 10;
            n++;
        }
        
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /=10;
        }
        
        if(result == i){
            cout << i << " ";
        }

        n = 0;
        result = 0;

    }
    
    cout << "\n";
    return 0;
}
