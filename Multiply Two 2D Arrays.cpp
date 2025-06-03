#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter size of square matrices = ";
    cin >> n;
    int A[100][100], B[100][100], C[100][100] = { 0 };
    cout << "Enter matrix A" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Element[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }
    cout << "Enter matrix B" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << "element[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Result Matrix C" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
