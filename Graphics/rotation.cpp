#include <stdio.h>
#include <graphics.h>
#include <math.h>
int main()
{
    int gd = DETECT, r, gm, d, x1, y1, x2, y2, xn1, yn1, xn2, yn2;
    float ra, si, co;
    initgraph(&gd, &gm, NULL);

    printf("Enter the value of X1 and Y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the value of X2 and Y2: ");
    scanf("%d %d", &x2, &y2);
    line(x1, y1, x2, y2);
    printf("Enter the degree of rotation: ");
    scanf("%d", &d);
    // Starting point would be same
    xn1 = x1;
    yn1 = y1;

    // Convert Degree into radian
    r = x2 - x1;
    ra = 0.0175 * d;
    si = sin(ra);
    co = cos(ra);
    // second point
    xn2 = x1 + r * co + 1;
    yn2 = y1 + r * si + 1;

    line(xn1, yn1, xn2, yn2);
    getch();
    closegraph();
}
