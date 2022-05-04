#include <graphics.h>

// driver code
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    line(150, 150, 450, 150);
    line(150, 200, 450, 200);
    line(150, 250, 450, 250);
    delay(10000);
    closegraph();
}