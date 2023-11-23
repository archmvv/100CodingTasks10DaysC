#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c, determinant, root1, root2, realPart, imaginaryPart;

    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    determinant = b * b - 4 * a * c;

    if (determinant > 0){
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);
        cout << "root1 = " << root1 << " and root2 = " << root2 << "\n";
    }
    else if (determinant == 0){
        root1 = root2 = -b / (2 * a);
        cout << "root1 = root2 = " << root1 << "\n";
    }
    else{
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-determinant) / (2 * a);
        cout << "root1 = " << realPart << "." << imaginaryPart << " and root2 = " << realPart << "." << imaginaryPart << "\n";
    }

    return 0;

}