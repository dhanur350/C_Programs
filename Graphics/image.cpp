#include <graphics.h>
using namespace std;
int main()
{
    initwindow(1000, 1000, "tutro");
    readimagefile((char *)"myimg.jpg", 0, 0, 325, 325);
    getch();
    return 0;
}