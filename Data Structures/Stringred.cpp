#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; // String to store input
    int T = 0, res = 0;
    int tab[3];

    cin >> T; // Test cases

    for (int t = 0; t < T; t++)
    {
        s.clear();
        tab[0] = 0;
        tab[1] = 0;
        tab[2] = 0;
        res = 0;

        cin >> s;
        for (unsigned int i = 0; i < s.size(); i++) // unsigned to get no. without minus sign
        {
            if (s[i] == 'a')
                tab[0]++;
            else if (s[i] == 'b')
                tab[1]++;
            else if (s[i] == 'c')
                tab[2]++;
            else
                cerr << "dupa!" << endl;
        }

        sort(tab, tab + 3); // Function of algorithm headerfile

        while (tab[1] > 0)
        {
            tab[2]--;
            tab[1]--;
            tab[0]++;
            sort(tab, tab + 3);
        }

        cout << tab[2] << endl;
    }

    return 0;
}