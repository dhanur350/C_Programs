#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gd = DETECT, gm = DETECT;
    int x, y = 0, j, t = 400, c = 1;
    initgraph(&gd, &gm, NULL);
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    for (x = 40; x < 602; x++)
    {
        cleardevice();
        circle(x, y, 30);
        floodfill(x, y, RED);
        delay(40);
        if (y >= 400)
        {
            c = 0;
            t -= 20;
        }
        if (y <= (400 - t))
            c = 1;
        y = y + (c ? 15 : -15);
    }
    getch();
}
