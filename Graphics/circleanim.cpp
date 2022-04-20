#include <graphics.h>
#include <math.h>
int main()
{
    int graphd = DETECT, graphm;
    // int tx = 200, ty = 200, clr;
    // float sx = 0.5, sy = 0.5, rad, d = 45;
    // static int ii, jj, xr = 150, yr = 150; // by default 0 value
    // rad = d * 3.142 / 180;
    initgraph(&graphd, &graphm, NULL);
    setbkcolor(GREEN); // rectangle color will be red
    setcolor(RED);
    circle(300, 200, 100);
    circle(400, 200, 25);
    setcolor(GREEN);
    circle(400, 200, 25);
    setcolor(RED);
    circle(200, 200, 25);
    circle(300, 300, 25);
    circle(300, 100, 25);
    delay(50000);
    closegraph();
    return 0;
}