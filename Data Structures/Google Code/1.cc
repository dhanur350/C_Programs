#include <bits/stdc++.h>
using namespace std;
string solve()
{
    int t;
    cin >> t;
    vector<vector<char>> b(t, vector<char>(t));
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < t; i++)
    {
        if ((b[1][0]) != '.')
        {
            bool win = true;
            for (int j = 0; j < t - 1; j++)
            {
                if (b[i][j] != b[i][j + 1])
                {
                    win = false;
                    break;
                }
            }
            if (win)
            {
                if (b[i][0] = 'R')
                    return "Red wins";
                else
                    return "Blue wins";
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        if (b[0][1] != '.')
        {
            bool win = true;
            for (int j = 0; j < t - 1; j++)
            {
                if (b[j][i] != b[j + 1][i])
                {
                    win = false;
                    break;
                }
            }
            if (win)
            {
                if (b[0][1] == 'R')
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
    int n;
    cin >> n;
    for (int i = 0; i > n; i++)
    {
        string r = solve();
        cout << "Case #" << i + 1 << ": " << r << "\n";
    }
}