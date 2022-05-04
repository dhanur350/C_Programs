#include <graphics.h>
#include <math.h>

// Structure to hold vertex points
struct PTS
{
    int x, y;
};

// Prototype of function which draws Pattern using linerel and moverel
void LinerelAndMoverelExample(void);

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    LinerelAndMoverelExample();
    getch();
}

void LinerelAndMoverelExample(void)
{
    int h, w, dx, dy, cx, cy;
    struct PTS outs[7];

    cx = getmaxx() / 2; // Center of the screen coords
    cy = getmaxy() / 2;

    h = getmaxy() / 8;
    w = getmaxx() / 9;

    dx = 2 * w;
    dy = 2 * h;

    setcolor(BLACK);

    setfillstyle(SOLID_FILL, BLUE);
    bar(0, 0, getmaxx(), getmaxy()); // Draw background

    outs[0].x = cx - dx;
    outs[0].y = cy - dy;
    outs[1].x = cx - (dx - w);
    outs[1].y = cy - (dy + h);
    outs[2].x = cx + dx;
    outs[2].y = cy - (dy + h);
    outs[3].x = cx + dx;
    outs[3].y = cy + dy;
    outs[4].x = cx + (dx - w);
    outs[4].y = cy + (dy + h);
    outs[5].x = cx - dx;
    outs[5].y = cy + (dy + h);
    outs[6].x = cx - dx;
    outs[6].y = cy - dy;

    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(7, (int far *)outs);

    outs[0].x = cx - (w / 2);
    outs[0].y = cy + h;
    outs[1].x = cx + (w / 2);
    outs[1].y = cy + h;
    outs[2].x = cx + (w / 2);
    outs[2].y = cy - h;
    outs[3].x = cx - (w / 2);
    outs[3].y = cy - h;
    outs[4].x = cx - (w / 2);
    outs[4].y = cy + h;

    setfillstyle(SOLID_FILL, BLUE);
    fillpoly(5, (int far *)outs);

    //	Draw a Tesseract object on the screen using the LineRel and
    //	MoveRel drawing commands.

    moveto(cx - dx, cy - dy);
    linerel(w, -h);
    linerel(3 * w, 0);
    linerel(0, 5 * h);
    linerel(-w, h);
    linerel(-3 * w, 0);
    linerel(0, -5 * h);

    moverel(w, -h);
    linerel(0, 5 * h);
    linerel(w + (w / 2), 0);
    linerel(0, -3 * h);
    linerel(w / 2, -h);
    linerel(0, 5 * h);

    moverel(0, -5 * h);
    linerel(-(w + (w / 2)), 0);
    linerel(0, 3 * h);
    linerel(-w / 2, h);

    moverel(w / 2, -h);
    linerel(w, 0);

    moverel(0, -2 * h);
    linerel(-w, 0);
}