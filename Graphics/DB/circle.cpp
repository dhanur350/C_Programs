#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    initwindow(1366, 768, "CircleAnim");
    for (int i = 100; i <= 600; i++)
    {
        setactivepage(10);
        circle(100 + i, 100, 50);
        setactivepage(10);
        circle(100, 100 + i, 50);
        setactivepage(10);
        circle(110 + i, 100 + i, 50);
        delay(10);
        for (int j = 1200; j >= 600; j--)
        {
            setactivepage(10);
            circle(1100 - j, 100, 50);
            setactivepage(10);
            circle(100, 1200 - j, 50);
            setactivepage(10);
            circle(100 + j, 1200 - j, 50);
            setactivepage(10);
            delay(10);
        }
    }
    closegraph();
}