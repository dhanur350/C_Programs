#include <iostream>
using namespace std;
int main()
{
    system("clear");
    int n, i;
    static int rev;
    cout << "How many elements";
    cin >> n;
    int a[n];
    cout << "\nElements -> ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Reversed array elements are ";
    for (i = n - 1; i >= 0; i--)
    {
        cout << " " << a[i];
    }
    return 0;
}