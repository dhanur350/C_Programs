#include <bits/stdc++.h>
using namespace std;
string solve()
{
    int n;
    cin >> n;
    bool win;
    vector<vector<char>> g(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> g[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (q[1][0] != '.')
        {
            win = true;
            for (int j = 0; j < n - 1; j++)
            {
                if (q[i][j] != q[i][j + 1])
                {
                    win = false;
                    break;
                }
            }
            if (win)
            {
                if (q[i][0] = 'R')
                    return "Red wins";
                else
                    return "Blue wins";
            }
        }
    }
    return "Nobody wins";
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string r = solve();
        cout << "Case #" << i + 1 << ": " << r << "\n";
    }

    return 0;
}