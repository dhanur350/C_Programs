#include <iostream>
#include <graphics.h>
using namespace std;
void second()
{
    for (int i = 100; i < 1500; i++)
    {
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    initwindow(1366, 768, "CircleAnim");
    for (int i = 100; i < 800; i++)
    {
        cleardevice();
        circle(100 + i, 100, 50);
        cleardevice();
        circle(100, 100 + i, 50);
        cleardevice();
        circle(110 + i, 100 + i, 50);
        delay(10);
    }
    closegraph();
}