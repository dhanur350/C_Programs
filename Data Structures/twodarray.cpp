#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "How many rows and columns ?";
    cin >> rows >> columns;
    cout << "Enter your rows and columns data ->";
    int twodim[rows][columns];
    // Row Wise Input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter row " << i << " column " << j << " :";
            cin >> twodim[i][j];
            cout << endl;
        }
    }
    // Row Wise PRINT
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "|" << twodim[i][j] << "|";
        }
        cout << endl;
    }
    return 0;
}