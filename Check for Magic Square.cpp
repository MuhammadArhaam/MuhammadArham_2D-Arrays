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
            cout << "Element [" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "[ ";
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
            cout << "]" << endl;
    }
    int magicSum = 0;
    for (int j = 0; j < n; j++)
    {
        magicSum += matrix[0][j];
    }
    bool isMagic = true;
    for (int i = 1; i < n && isMagic; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < n; j++)
        {
            rowSum += matrix[i][j];
            if (rowSum != magicSum)
            {
                isMagic = false;
            }

        }
    }
    for (int j = 0; j < n && isMagic; j++)
    {
        int colSum = 0;
        for (int i = 0; i < n; i++)
        {
            colSum += matrix[i][j];
            if (colSum != magicSum)
            {
                isMagic = false;
            }
        }
    }
    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < n; i++)
    {
        diag1 += matrix[i][i];
        diag2 += matrix[i][n - 1 - i];
    }
    if (diag1 != magicSum || diag2 != magicSum)
    {
        isMagic = false;
    }
    if (isMagic)
    {
        cout << "It's a magic square!" << endl;
    }
    else
    {
        cout << "It's not a magic square." << endl;
    }
    return 0;
}
