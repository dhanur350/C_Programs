#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[6][6];
    for (int y = 0; y < 6; y++)
    {
        for (int x = 0; x < 6; x++)
        {
            cin >> array[x][y];
        }
    }
    int maxHourglass = getHourglass(array, 1, 1);
    for (int y = 1; y < 5; y++)
    {
        for (int x = 1; x < 5; x++)
        {
            int hourres = getHourglass(array, x, y);
            if (hourres > maxHourglass)
            {
                maxHourglass = hourres;
            }
        }
    }
    cout << maxHourglass << endl;
}
int getHourglass(int[][] array, int x, int y)
{
    return array[x][y] + array[x - 1][y - 1] + array[x][y - 1] + array[x + 1][y - 1] + array[x - 1][y + 1] + array[x][y + 1] + array[x + 1][y + 1];
}
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6], s;
    int m = INT_MIN;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            s = (a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1] + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2]);
            if (s > m)
                m = s;
        }
    }
    cout << m;
    return 0;
}
*/