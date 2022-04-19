#include <iostream>
using namespace std;
int count(char input[])
{
    int count = 0, i;
    for (i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void rev(char input[])
{
    static int s;             // First character address fetch
    int e = count(input) - 1; // Last character address fetch
    while (s < e)             // Loop continue till s(start pointer) > e(end pointer)
    {
        swap(input[s], input[e]);
        s++; // Shift to forwarded character --->
        e--; // Shift to backwarded character <---
    }
}
int main()
{
    system("clear");
    char inp[50];
    cout << "Enter name :";
    cin.getline(inp, 100);
    cout << "You entered " << inp << endl;
    cout << "Words count " << count(inp) << endl;
    rev(inp);
    cout << "Reversed string :" << inp << endl;
    return 0;
}