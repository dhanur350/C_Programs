#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cin >> row >> column;
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    int diff;
    diff = (arr[0][0] + arr[1][1] + arr[2][2]) - (arr[0][2] + arr[1][1] + arr[2][0]);
    cout << diff;
    return 0;
}