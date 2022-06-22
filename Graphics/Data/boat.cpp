#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    initwindow(1024, 720, "boat");
    for (int i = 0; i < 1500; i++)
    {
        cleardevice();
        line(i, 325, i + 315, 325);
        line(i + 75, 425, i + 250, 425);
        line(i + 315, 325, i + 250, 425);
        line(i, 325, i + 75, 425);
        delay(100);
    }
    delay(10000);
    closegraph();
    return 0;
}