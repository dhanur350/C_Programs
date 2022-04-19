#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string stringFirst, stringSecond;
    cout << "Enter string 1 and 2 :";
    cin >> stringFirst;
    cin >> stringSecond;
    /*int length1 = stringFirst.size();
    int length2 = stringSecond.size();
    cout << length1 << " " << length2 << endl;
    cout << (stringFirst + stringSecond) << endl;*/
    char temp1 = stringFirst[3];
    char temp2 = stringSecond[0];
    stringFirst[3] = temp2;
    cout << stringFirst;
    stringSecond[0] = temp1;
    cout << " " << stringSecond;
    return 0;
}
