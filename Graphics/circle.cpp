#include <graphics.h>

void draw(int x, int y, int h, int k)
{
    putpixel(h + x, k + y, GREEN);
    delay(10);
    putpixel(h - x, k + y, RED);
    delay(10);
    putpixel(h + x, k - y, BLUE);
    delay(10);
    putpixel(h - x, k - y, YELLOW);
    delay(10);
    putpixel(h + y, k + x, GREEN);
    delay(10);
    putpixel(h - y, k + x, RED);
    delay(10);
    putpixel(h + y, k - x, BLUE);
    delay(10);
    putpixel(h - y, k - x, YELLOW);
    delay(10);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int x, y, h, k, r, d;
    printf("  ");
    printf("  Enter the radius of circle : ");
    scanf("%d",&r);
    printf("\n  Enter the coordinate of centre of circle :");
    scanf("%d%d",&h,&k);
    x = 0;
    y = r;
    d = 1 - r;
    draw(x, y, h, k);
    while (x <= y)
    {
        x++;
        if (d < 0)
        {
            d = d + (2 * x) + 3;
        }
        else
        {
            y--;
            d = d + (2 * (x - y)) + 5;
        }
        draw(x, y, h, k);
    }
    getch();
    closegraph();
    return 0;
}
