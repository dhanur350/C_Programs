#include <iostream>
#include "thiskey.cpp"
using namespace std;
int main()
{
    thiskey th(10);
    // At compiling it'll be same address
    cout << "address of thiskey " << &th << endl;
    return 0;
}