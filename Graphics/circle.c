#include <graphics.h>
#include <stdio.h>

void draw(int x, int y, int h, int k)
{
    // putpixel(h + x, k + y, WHITE);
    // delay(10);
    //  putpixel(h - x, k + y, WHITE);
    //  delay(10);
    putpixel(h + x, k - y, WHITE);
    delay(10);
    putpixel(h - x, k - y, WHITE);
    delay(10);
    putpixel(h + y, k + x, WHITE);
    delay(10);
    putpixel(h - y, k + x, WHITE);
    delay(10);
    putpixel(h + y, k - x, WHITE);
    delay(10);
    putpixel(h - y, k - x, WHITE);
    delay(10);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int x, y, h = 150, k = 150, r = 100, d;
    /*printf("  ");
    printf("  Enter the radius of circle : ");
    scanf("%d", &r);
    printf("\n  Enter the coordinate of centre of circle :");
    scanf("%d%d", &h, &k);*/
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
    closegraph();
    return 0;
}
