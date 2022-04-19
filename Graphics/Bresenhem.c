#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x, y, m, x1 = 10, y1 = 20, x2 = 400, y2 = 400, dy, dx, endx;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    m = dy / dx;
    int d = 2 * dy - dx;
    int dl = 2 * dy;
    int du = 2 * (dy - dx);
    x = x1;
    y = y1;
    endx = x2;
    putpixel(x, y, GREEN);
    delay(10);
    // m=(x2-x1)/(y2-y1);
    while (x < endx)
    {
        x = x + 1;
        if (d < 0)
        {
            d = d + dl;
        }
        else
        {
            y = y + 1;
            d = d + dx;
        }
        putpixel(x, y, GREEN);
        delay(10);
    }
    getch();
    closegraph();
    return 0;
}