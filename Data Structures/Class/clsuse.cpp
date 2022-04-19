#include <iostream>
// To include a file from cpp compile another file with this .cpp use (g++ file.cpp -shared) command
#include "clas.cpp"
using namespace std;
class clsuse
{
public:
    int pinCode;
    string place;
    void input()
    {
        cout << "Enter PIN Code area";
        cin >> pinCode;
        cout << endl
             << "Enter Place ";
        cin >> place;
        cout << endl;
    }
    void output()
    {
        cout << "Your PIN Code " << pinCode << endl;
        cout << "Your place is " << place << endl;
    }
};
int main()
{
    // Static Object declaration
    clas c1;
    // Dynamic Object declaration
    clsuse *c2 = new clsuse;
    c1.input();
    c1.output();
    c2->input();
    c2->output();
    return 0;
}
