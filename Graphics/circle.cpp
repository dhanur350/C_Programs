#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    circle(300, 150, 150);
    delay(10000);
    closegraph();
}