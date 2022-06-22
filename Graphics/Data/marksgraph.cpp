#include <graphics.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    initwindow(1000, 1000, "Seema");
    line(125, 75, 125, 400);
    outtextxy(125, 400, "0");
    outtextxy(125, 300, "100");
    outtextxy(125, 200, "200");
    outtextxy(125, 100, "300");
    outtextxy(125, 50, "400");
    delay(1000);
    line(125, 400, 800, 400);
    outtextxy(275, 400, "Gagan");
    delay(1000);
    // circle(470, 300, 100);
    line(130, 145, 275, 85);
    outtextxy(420, 400, "Dhanur");
    delay(1000);
    line(275, 88, 440, 325);
    outtextxy(620, 400, "Seema");
    delay(1000);
    line(440, 325, 625, 95);
    outtextxy(790, 400, "Amandeep");
    delay(1000);
    line(625, 95, 780, 315);
    delay(1000);
    delay(10000);
    closegraph();
    return 0;
}