#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // int length = 100, width = 200, x = 100, y = 200;
    setcolor(10);
    rectangle(500, 500, 100, 100);
    fill
        floodfill(500, 500, GREEN);
    delay(6000);
    closegraph();
    return 0;
}