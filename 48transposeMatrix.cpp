#include <iostream>
using namespace std;

void printMatrix(int matrix[10][10], int r, int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int a[10][10], transpose[10][10], r, c;

    cout << "Enter the number of rows and cols: ";
    cin >> r >> c;

    cout << "\nEnter the elements of the matrix: \n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "a[" << i + 1 << "]["<< j + 1 <<"]:";
            cin >> a[i][j];
        }
    }

    cout << "Source matrix :\n";
    printMatrix(a, r, c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
    
    cout<< "Transpose: \n";
    printMatrix(transpose, r, c);

    return 0;
}