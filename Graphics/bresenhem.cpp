#include <graphics.h>
#include <stdio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int x1 = 12, y1 = 25, x2 = 240, y2 = 460; // ENTER YOUR CO-ORDIANTES HERE
    int x, y, m, dy, dx, endx;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    m = dy / dx;            // Slope of line
    int d = 2 * dy / dx;    // Decision Parameter
    int dl = 2 * dy;        // wHEN d<0
    int du = 2 * (dy - dx); // When d>0
    x = x1;
    endx = x2;
    y = y1;
    putpixel(x, y, GREEN);
    while (x < endx)
    {
        x = x + 1;
        if (d < 0)
            d = d + dl;
        else
        {
            y = y + 1;
            d = d + du;
        }
        putpixel(x, y, BLUE);
    }
    getch();
    closegraph();
    return 0;
}
