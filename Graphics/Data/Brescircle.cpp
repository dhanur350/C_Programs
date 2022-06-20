// C-program for circle drawing
// using Bresenham’s Algorithm
// in computer-graphics
#include <graphics.h>
// Function to put pixels
// at subsequence points
void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, RED);
    putpixel(xc - x, yc + y, YELLOW);
    putpixel(xc + x, yc - y, GREEN);
    putpixel(xc - x, yc - y, YELLOW);
    putpixel(xc + y, yc + x, RED);
    putpixel(xc - y, yc + x, YELLOW);
    putpixel(xc + y, yc - x, GREEN);
    putpixel(xc - y, yc - x, YELLOW);
}
// Function for circle-generation
// using Bresenham's algorithm
void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    drawCircle(xc, yc, x, y);
    while (y >= x)
    {
        // for each pixel we will
        // draw all eight pixels
        x++;
        // check for decision parameter
        // and correspondingly
        // update d, x, y
        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        drawCircle(xc, yc, x, y);
        delay(50);
    }
}

int main()
{
    int xc = 100, yc = 100, r = 50;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL); // initialize graph
    circleBres(xc, yc, r);     // function call
    delay(5000);
    return 0;
}
