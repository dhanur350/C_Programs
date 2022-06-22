#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    /* Declaring a variable */
    int gdriver, gmode;
    /* Polygon array to define points on the polygon shape */
    int poly[10];
    /* Initialize the variables */
    gdriver = DETECT;
    /* Initialize the graph and set path to BGI files */
    initgraph(&gdriver, &gmode, NULL);
    /* Polygon Points in Pairs */
    poly[0] = 20; /* 1st vertex */
    poly[1] = 100;
    poly[2] = 120;
    poly[3] = 140; /* 2nd vertex */
    poly[4] = 240;
    poly[5] = 260; /* 3rd vertex */
    poly[6] = 120;
    poly[7] = 320; /* 4th vertex */
    poly[8] = poly[0];
    poly[9] = poly[1]; /* The polygon does not
    close automatically, so we close it */
    /* Set the fill style for the Polygon */
    setcolor(getmaxcolor());
    setfillstyle(SOLID_FILL, RED);
    /* Draw the Polygon */
    fillpoly(5, poly);
    getch();
    /* Close the graph */
    closegraph();
    return 0;
}
