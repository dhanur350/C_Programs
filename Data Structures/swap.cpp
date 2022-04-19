#include <iostream>
using namespace std;
void swap1()
{
    int a, b, temp;
    cout << "Enter value of a and b";
    cin >> a >> b;
    cout << "\nValue of a and b before swapping " << a << " and " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "\nValue of a and b after swapping using temp variable " << a << " and " << b << endl;
}
void swap2()
{
    int a, b;
    cout << "Enter value of a and b";
    cin >> a >> b;
    cout << "\nValue of a and b before swapping " << a << " and " << b << endl;
    a = a ^ b; // a=3^4
    b = a ^ b; // b=3^4^3 (^ -> XOR Operaotr)
    a = a ^ b; // a=4^4^3
    cout << "\nValue of a and b after swapping using temp variable " << a << " and " << b << endl;
}
int main()
{
    swap1();
    swap2();
    return 0;
}