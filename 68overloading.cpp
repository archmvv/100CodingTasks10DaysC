#include <iostream>
using namespace std;

class Coord{
    int x, y;
    public:
    Coord() {
        x = 0;
        y = 0;
    }
    Coord(int i, int j) {
        x = i;
        y = j;
    }
    void getXY() {
        cout << "X: " << x << " Y: " << y << endl;
    }
    Coord operator+(Coord ob2);
    Coord operator-(Coord  ob2);
};

Coord Coord::operator+(Coord ob2) {
    Coord temp;
    temp.x = x + ob2.x;
    temp.y = y + ob2.y;
    return temp;
}

Coord Coord::operator-(Coord ob2) {
    Coord temp;
    temp.x = x - ob2.x;
    temp.y = y - ob2.y;
    return temp;
}

int main(){
    Coord a(100, 200);
    Coord b(50, 70);
    Coord c;
    Coord d;

    c = a + b;
    d = a - b;
    c.getXY();
    d.getXY();

    return 0;
}