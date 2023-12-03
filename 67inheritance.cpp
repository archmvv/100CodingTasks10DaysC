#include <iostream>
using namespace std;

class Parent {
    int x;
    public: 
    void setX(int n) {
        x = n;
    }
    void getX() {
        cout << x << endl;
    }
};

class  Child: public Parent
{
private:
    int y;
public:
     void setY(int n) {
        y = n;
     }
     void getY() {
        cout << y << endl;
     }
};

int main(){
    Child ob;

    ob.setX(100);

    ob.setY(200);

    ob.getX();

    ob.getY();

    return 0;
}