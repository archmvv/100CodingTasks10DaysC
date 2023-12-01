#include <iostream>
using namespace std;

class Demo {
    int a;
public:
    void setA(int n) {
        a = n;
    }
    int getA() {
        return a;
    }
};

int main() {
    Demo ar[3];

    for (int i = 0; i < 3; i++)
    {
        ar[i].setA(i);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << ar[i].getA() << " ";
    }
    cout << endl;
    
    return 0;
}