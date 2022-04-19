#include <iostream>
class clas
{
public:
    int age;
    char name[100];
    void input()
    {
        std::cout << "Enter age";
        std::cin >> age;
        std::cout << std::endl
                  << "Enter name ";
        std::cin >> name;
        std::cout << std::endl;
    }
    void output()
    {
        std::cout << "Name " << name << std::endl;
        std::cout << "Age " << age << std::endl;
    }
};
