#include <iostream>
using namespace std;
void returnFunction(int arr[][5], int rows, int columns)
{
    /*for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }*/
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
int main()
{
    int arr[][5] = {{1, 2}, {3, 4}};
    int rows, columns;
    cout << "How many rows and columns ?";
    cin >> rows >> columns;
    returnFunction(arr, rows, columns);
    return 0;
}