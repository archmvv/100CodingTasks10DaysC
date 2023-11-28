#include <iostream>
using namespace std;

int main(){
    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2;

    cout << "Enter the number of rows and cols [matrix1]: ";
    cin >> r1 >> c1;

    cout << "Enter the number of rows and cols [matrix2]: ";
    cin >> r2 >> c2;

    while (c1 != r2)
    {
        cout << "** The number of cols for first matrix is not equal to number of rows of the second matrix.**\n\n";
        cout << "Enter the number of rows and cols [matrix1]: ";
        cin >> r1 >> c1;
        cout << "Enter the number of rows and cols [matrix2]: ";
        cin >> r2 >> c2;
    }
    
    cout << "Enter the items of the first matrix: ";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "a[" << i + 1 << "]["<< j + 1 <<"]:";
            cin >> a[i][j];
        }
    }

    cout << "Enter the items of the second matrix: ";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "b[" << i + 1 << "]["<< j + 1 <<"]:";
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
    }
    
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    cout << "\nResult (a + b) :\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}