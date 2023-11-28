#include <iostream>
using namespace std;

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, 
int rowSecond, int columnSecond){
    cout << "Enter the items of the first matrix: ";
    for (int i = 0; i < rowFirst; i++)
    {
        for (int j = 0; j < columnFirst; j++)
        {
            cout << "a["<< i + 1 << "][" << j + 1 << "]: ";
            cin >> firstMatrix[i][j];
        }
    }
    cout << "Enter the items of the second matrix: ";
    for (int i = 0; i < rowSecond; i++)
    {
        for (int j = 0; j < columnSecond; j++)
        {
            cout << "a["<< i + 1 << "][" << j + 1 << "]: ";
            cin >> secondMatrix[i][j];
        }
    }
}

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, 
int rowSecond, int columnSecond){
    for (int i = 0; i < rowFirst; i++)
    {
        for (int j = 0; j < columnSecond; j++)
        {
            mult[i][j] = 0;
        }
    }
    
    for (int i = 0; i < rowFirst; i++)
    {
        for (int j = 0; j < columnSecond; j++)
        {
            for (int k = 0; k < columnFirst; k++)
            {
                mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void display(int mult[][10], int rowFirst, int columnSecond){
    cout << "\nResult: \n";
    for (int i = 0; i < rowFirst; i++)
    {
        for (int j = 0; j < columnSecond; j++)
        {
            cout << mult[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond;

    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rowFirst >> columnFirst;

    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rowSecond >> columnSecond;

    while (columnFirst != rowSecond)
    {
        cout << "** The number of cols for first matrix is not equal to number of rows of the second matrix.**\n\n";
        cout << "Enter the number of rows and cols [matrix1]: ";
        cin >> rowFirst >> columnFirst;
        cout << "Enter the number of rows and cols [matrix2]: ";
        cin >> rowSecond >> columnSecond;
    }
    
    enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);

    multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);

    display(mult, rowFirst, columnSecond);

    return 0;
}