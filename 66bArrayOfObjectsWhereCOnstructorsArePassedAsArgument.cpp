#include <iostream>
using namespace std;

class Demo {
    int a;
public:
    Demo(int n) {
        a = n;
    }
    int getA() {
        return a;
    }
};

int main() {
    Demo ar[3] = {3, 2, 1};

    for (int i = 0; i < 3; i++)
    {
        cout << ar[i].getA() << " ";
    }
    cout << endl;
    
    return 0;
}