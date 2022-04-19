#include <iostream>
using namespace std;
int length(char input[])
{
    int count = 0, i;
    for (i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[100];
    cout << "Enter your name ";
    cin >> name;
    cout << "Size of " << name << " " << length(name) << endl;
    return 0;
}
