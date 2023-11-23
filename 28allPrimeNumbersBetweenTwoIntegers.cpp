#include <iostream>
using namespace std;

int main(){
    int low, high, flag;
    int temp;

    cout << "Enter a and b: ";
    cin >> low >> high;

    if(low > high){
        temp = low;
        low = high;
        high = temp;
    }

    while (low <= high)
    {
        flag = 0;

        for (int i = 2; i <= low/2; i++)
        {
            if(low % i == 0){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            cout << low << " ";
        }
        low++;
    }
    
    cout << "\n";
    return 0;
}