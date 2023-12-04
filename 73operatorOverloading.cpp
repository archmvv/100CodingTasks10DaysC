#include <iostream>
#include <fstream>
using namespace std;

class Coord {

public: 
    int x;
    int y;
Coord(int i, int j){
    x = i;
    y = j;
}

friend ostream &operator<< (ostream &stream, Coord ob);
friend istream &operator>> (istream &stream, Coord &ob);
};

ostream &operator<< (ostream &stream, Coord ob){
    stream << ob.x << " " << ob.y << "\n";
    return stream;
}

istream &operator>> (istream &stream, Coord &ob){
    stream >> ob.x >> ob.y;
    return stream;
}

int main(){
    Coord o1(100, 200);
    Coord o2(300, 400);

    ofstream outF("coords.txt");

    if(!outF){
        cout << "Error opening the file.\n";
        return 1;
    }

    outF << o1 << o2;

    outF.close();

    ifstream inF("coords.txt");
    Coord o3(0, 0);
    Coord o4(0, 0);

    inF >> o3 >> o4;
    cout << o3 << o4;
    inF.close();

    return 0;
}