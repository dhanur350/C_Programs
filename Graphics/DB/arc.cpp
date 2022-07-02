#include <graphics.h>
int main()
{
    // Practice of arcs
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    initwindow(1366, 768, "Arcs");
    delay(10000);
    closegraph();
    return 0;
}