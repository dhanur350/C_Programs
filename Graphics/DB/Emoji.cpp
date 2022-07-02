#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    initwindow(1366, 768, "Arcs");
    arc(150, 175, 180, 0, 30);
    circle(120, 100, 10);
    circle(180, 100, 10);
    circle(150, 150, 100);
    delay(10000);
    closegraph();
    return 0;
}