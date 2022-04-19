#include <iostream>
using namespace std;
class party
{
    int choice;

public:
    void game1()
    {
        system("clear");
        cout << "*****Pick your choice*****" << endl
             << "*****From 1 to 10******" << endl;
        cout << "You chose the no. ->";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "(R) What is full of holes but still holds water?" << endl;
            break;
        case 2:
            cout << "(R) What question can you never answer yes to?" << endl;
            break;
        case 3:
            cout << "(R) What is always in front of you but can’t be seen?" << endl;
            break;
        case 4:
            cout << "(T) I scream, you scream, we all scream, for ice cream!" << endl;
            break;
        case 5:
            cout << "Try to speak"
                 << "If one doctor doctors another doctor," << endl
                 << "Then which doctor is doctoring the doctored doctor?" << endl
                 << "Does the doctor who doctors the doctor," << endl
                 << "doctor the doctor the way the doctor he is doctoring doctors?" << endl
                 << "Or does he doctor the doctor the way the doctor who doctors doctors?" << endl;
            break;
        case 6:
            cout << "(R) What can you break, even if you never pick it up or touch it?" << endl;
            break;
        case 7:
            cout << "(R) I shave every day, but my beard stays the same. What am I?" << endl;
            break;
        case 8:
            cout << "(T)" << endl
                 << "All I want is a proper cup of coffee," << endl
                 << "Made in a proper copper coffee pot" << endl
                 << "I may be off my dot" << endl
                 << "But I want a cup of coffee" << endl
                 << "From a proper coffee pot." << endl
                 << "Tin coffee pots and iron coffee pots" << endl
                 << "They’re no use to me –" << endl
                 << "If I can’t have a proper cup of coffee" << endl
                 << "In a proper copper coffee pot" << endl
                 << "I’ll have a cup of tea." << endl;
            break;
        case 9:
            cout << "She sells sea shells by the seashore" << endl
                 << "And the shells she sells by the seashore are sea shells for sure." << endl;
            break;
        case 10:
            cout << "You see a boat filled with people," << endl
                 << "Yet there isn’t a single person on board. How is that possible?" << endl;
            break;
        default:
            break;
        }
    }
    void game2()
    {
        system("clear");
        cout << "*****Pick your choice*****" << endl;
        cout << "*****From 1 to 10******" << endl;
        cout << "You chose the no. ->";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "(T)" << endl
                 << "Through three cheese trees three free fleas flew" << endl
                 << "While these fleas flew, freezy breeze blew" << endl
                 << "Freezy breeze made these three trees freeze" << endl
                 << "Freezy trees made these trees’ cheese freeze" << endl
                 << "That’s what made these three free fleas sneeze" << endl;
            break;
        case 2:
            cout << "(R)" << endl
                 << " What two things can you never eat for breakfast?" << endl;
            break;
        case 3:
            cout << "(R)" << endl
                 << " What has lots of eyes, but can’t see?" << endl;
            break;
        case 4:
            cout << "(R) What has many needles, but doesn’t sew?" << endl;
            break;
        case 5:
            cout << "(T) Greek grapes, Greek grapes, Greek grapes" << endl
                 << ". Say it 3 times fast" << endl;
            break;
        case 6:
            cout << "(T) Four fine fresh fish for you." << endl
                 << " Say it fast 3 times " << endl;
            break;
        case 7:
            cout << "(T) Four furious friends fought for the phone." << endl
                 << " (Say it fast 3 times)" << endl;
            break;
        case 8:
            cout << "(R)" << endl
                 << "What is cut on a table, but is never eaten?" << endl;
            break;
        case 9:
            cout << "(R)" << endl
                 << "What kind of coat is best put on wet?" << endl;
            break;
        case 10:
            cout << "(R)" << endl
                 << "What has four wheels and flies?" << endl;
            break;
        default:
            break;
        }
    }
};
int main()
{
    party frsh;
    int c;
    system("clear");
    cout << "**Game slots**" << endl;
    cout << "You chose the slot. ->";
    cin >> c;
    switch (c)
    {
    case 1:
        frsh.game1();
        break;
    case 2:
        frsh.game2();
        break;
    default:
        exit(0);
        break;
    }
    return 0;
}