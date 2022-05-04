#include <graphics.h>
#include <math.h>
#define MAXPTS 15
#define M_PI 3.14159265358979323846
// Structure to hold vertex points
struct PTS
{
    int x, y;
};

// Prototype of function which draws Pattern using lineto and moveto
void LineToAndMoveToExample(void);

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    LineToAndMoveToExample();
    getch();
}

void LineToAndMoveToExample(void)
{
    struct PTS points[MAXPTS]; // To store coordinates of all points of pattern
    int i, j, h, w, xcenter, ycenter;
    int radius, angle, step;
    int xasp, yasp;     // To store x and y aspect ratio of monitor screen
    double AspectRatio; // To aspect ratio of a pixel on the screen
    double rads;

    getaspectratio(&xasp, &yasp);              // read the hardware aspect
    AspectRatio = (double)xasp / (double)yasp; // Get correction factor

    h = getmaxy();
    w = getmaxx();

    xcenter = w / 2; // Determine the center of circle (x-component)
    ycenter = h / 2; // Determine the center of circle (y-component)
    radius = (h - 30) / (AspectRatio * 2);
    step = 360 / MAXPTS; // Determine angle of increments

    angle = 0;                   // Begin at zero degrees
    for (i = 0; i < MAXPTS; ++i) // Determine circle intercepts
    {
        rads = (double)angle * M_PI / 180.0; // Convert angle from degree to radian
        points[i].x = xcenter + (int)(cos(rads) * radius);
        points[i].y = ycenter - (int)(sin(rads) * radius * AspectRatio);
        angle += step; // Move to next increment
    }

    circle(xcenter, ycenter, radius); // Draw bounding circle

    for (i = 0; i < MAXPTS; ++i) // Draw the cords to the circle
    {
        for (j = i; j < MAXPTS; ++j) // For each remaining intersect
        {
            moveto(points[i].x, points[i].y); // Move to beginning of cord
            lineto(points[j].x, points[j].y); // Draw the cord
        }
    }
}