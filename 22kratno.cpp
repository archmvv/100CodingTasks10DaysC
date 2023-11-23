#include <iostream>
using namespace std;

int main(){
    int n1, n2, LCM;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    LCM = (n1>n2) ? n1 : n2;

    while(1){
        if(LCM % n1 == 0 && LCM % n2 == 0){
            cout << "LCM = " << LCM << "\n";
            break;
        }
        LCM++;
    }

    return 0;
}
