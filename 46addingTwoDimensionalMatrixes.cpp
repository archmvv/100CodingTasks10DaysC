#include <iostream>
using namespace std;

int main(){
    int r, c, a[100][100], b[100][100], sum[100][100];

    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of cols: ";
    cin >> c;

    cout << "Enter the items of the first matrix: ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "a[" << i + 1 << "]["<< j + 1 <<"]:";
            cin >> a[i][j];
        }
    }

    cout << "Enter the items of the second matrix: ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "b[" << i + 1 << "]["<< j + 1 <<"]:";
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
        
    }

    cout << "\nResult (sum a + b) :\n\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
