#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string str;
        cin >> str;
        string current = "hackerrank";
        int strr = 0;
        for (int j = 0; j < str.size() && strr < current.size(); j++)
        {
            if (str[j] == current[strr])
            {
                strr++;
            }
        }
        if (strr == current.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        }
    return 0;
}