#include <iostream>
using namespace std;
int main()
{
    int min, large = 0, i, n;
    cout << "Enter no of elements";
    cin >> n;
    int a[n];
    cout << "\nEnter elements";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
        /*else
        {
            cout << "No large element" << endl;
        }*/
    }
    cout << large << endl;
    return 0;
}
/**
 *to find largest no of element we have to traverse and compare each array element
 */