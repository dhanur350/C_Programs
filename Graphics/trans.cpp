#include <graphics.h>
#include <math.h>
int main()
{
    int graphd = DETECT, graphm;
    int tx = 200, ty = 200, clr;
    float sx = 1.8, sy = 1.8, rad, d = 15;
    static int ii, jj, xr = 150, yr = 150; // by default 0 value
    rad = d * 3.142 / 180;
    initgraph(&graphd, &graphm, NULL);
    setbkcolor(GREEN);
    setcolor(RED); // rectangle color will be red
    rectangle((100, 100), (200, 100), (200, 200), (100, 200));
    // circle(150, 150, 25);
    delay(1000);
    for (int i = 99; i <= 201; i++)
    {
        for (int j = 99; j <= 201; j++)
        {
            // clr = getpixel(i, j);
            //  printf("%d", &clr);
            // ii = (int)(i * cos(rad) - j * sin(rad));
            // jj = (int)(j * sin(rad) + j * cos(rad));
            ii = (int)(xr + (i - xr) * cos(rad) - (j - yr) * sin(rad));
            jj = (int)(yr + (j - yr) * sin(rad) - (j - yr) * cos(rad));
            // ii = (int)(i * sx);
            // jj = (int)(j * sy);
            // ii = i + tx;
            // jj = j + ty;
            putpixel(ii, jj, getpixel(i, j));
            // putpixel(i, j, GREEN);
        }
        printf(" ");
    }

    // line(120, 100, 100, 70);
    delay(50000);
    closegraph();
    return 0;
}