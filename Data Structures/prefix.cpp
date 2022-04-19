#include <iostream>
#include <cstring>
using namespace std;
void printallPrefixes(char str[]) // abcd
{
    for (int end = 0; str[end] != '\0'; end++) // e=0
    {
        for (int start = 0; start <= end; start++) // s=0 ,s=<e True -> print character a
        {
            cout << str[start]; // here start will = 1 and will check start<=end
        }                       // START != end false then cout<<endl; and end = 1
        cout << endl;
    }
}
int main()
{
    int n = 100;
    char str[n];
    cout << "Enter Characters for Prefix";
    cin >> str;
    printallPrefixes(str);
    return 0;
}