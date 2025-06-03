#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter the number of rows = ";
    cin >> rows;
    cout << "Enter the number of columns = ";
    cin >> cols;
    int array[100][100];
    cout << "Enter the elements row by row = " << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Element [" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += array[i][j];
        }

    }
    cout << "Sum of all elements: " << sum << endl;
    return 0;
}
