#include <graphics.h>
#include <conio.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    initwindow(1366, 768, "bowling");
    line(0, 415, 1200, 415);
    outtext("BOWLING");
    // setbkcolor(15);
    // floodfill(1355, 768, 100);
    // getbkcolor(WHITE);
    // setbkcolor(2);
    circle(215, 415, 100);
    line(0, 600, 1200, 600);
    ellipse(900, 425, 0, 360, 50, 100);
    ellipse(1000, 425, 0, 360, 50, 100);
    ellipse(1100, 425, 0, 360, 50, 100);
    // void ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius)
    rectangle(100, 100, 100, 100);
    // void rectangle(int left, int top, int right, int bottom)
    delay(10000);
    getch();
    closegraph();
    return 0;
}