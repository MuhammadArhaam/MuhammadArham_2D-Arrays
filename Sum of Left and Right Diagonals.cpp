#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of square matrix = ";
    cin >> n;
    int matrix[100][100];
    cout << "Enter matrix elements" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int leftDiagonalSum = 0, rightDiagonalSum = 0;
    for (int i = 0; i < n; i++)
    {
        leftDiagonalSum += matrix[i][i];
        rightDiagonalSum += matrix[i][n - 1 - i];
    }
    cout << "Left diagonal sum = " << leftDiagonalSum << endl;
    cout << "Right diagonal sum = " << rightDiagonalSum << endl;
    return 0;
}
