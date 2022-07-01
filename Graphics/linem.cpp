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
void man();
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    initwindow(1366, 768, "Bhrammastra");
    man();
    LineToAndMoveToExample();
    getch();
}
void man() // Man 2D Structure diagram
{
    // for head
    ellipse(320, 95, 360, 0, 25, 20);
    line(298, 85, 341, 85);
    circle(310, 90, 2);
    circle(330, 90, 2);
    arc(320, 100, 200, -20, 10);

    // for neck
    line(313, 115, 313, 125);
    line(328, 115, 328, 125);

    // For centre part
    arc(320, 225, 72, 107, 100);
    line(290, 129, 290, 200);
    line(350, 129, 350, 200);
    line(290, 193, 350, 193);
    line(290, 200, 350, 200);

    // for legs
    line(290, 200, 285, 280);
    line(320, 225, 305, 280);
    line(322, 225, 335, 280);
    line(350, 200, 355, 280);

    // for right hand
    line(290, 129, 255, 165);
    line(255, 165, 290, 200);
    line(290, 149, 275, 165);
    line(275, 165, 290, 182);

    // for left hand
    line(350, 129, 385, 165);
    line(385, 165, 350, 200);
    line(350, 149, 365, 165);
    line(365, 165, 350, 182);

    // for shoes
    line(285, 280, 275, 287);
    line(275, 287, 305, 287);
    line(305, 280, 305, 287);
    line(335, 280, 335, 287);
    line(335, 287, 365, 287);
    line(355, 280, 365, 287);
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
        delay(300);
    }

    circle(xcenter, ycenter, radius); // Draw bounding circle

    for (i = 0; i < MAXPTS; ++i) // Draw the cords to the circle
    {
        for (j = i; j < MAXPTS; ++j) // For each remaining intersect
        {
            moveto(points[i].x, points[i].y); // Move to beginning of cord
            lineto(points[j].x, points[j].y); // Draw the cord
        }
        delay(300);
    }
}