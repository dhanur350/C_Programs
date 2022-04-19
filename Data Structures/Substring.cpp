#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007               // Macro to get MOD
#define BIT(x) __builtin_popcount(x) // Macro to get popcount

int n, k; // Global declaration
int D[1505][1505], K[1505][1505];
char A[1505], B[1505];

int main()
{
    int t;
    cin >> t; // Test case
    while (t--)
    {
        scanf("%d", &k);
        scanf("%s%s", A, B);
        n = strlen(A);
        int r = 0;
        memset(D, 0, sizeof(D));
        memset(K, 0, sizeof(K));
        for (int i = n - 1; i >= 0; i--)
            for (int j = n - 1; j >= 0; j--)
            {
                D[i][j] = D[i + 1][j + 1] + 1;
                K[i][j] = K[i + 1][j + 1] + ((A[i] == B[j]) ? 0 : 1);
                while (K[i][j] > k)
                {
                    if (A[i + D[i][j] - 1] != B[j + D[i][j] - 1])
                        K[i][j]--;
                    D[i][j]--;
                }
                r = max(r, D[i][j]);
            }
        cout << r << endl;
    }
    return 0;
}