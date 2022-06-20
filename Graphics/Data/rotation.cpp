#include <graphics.h>
#include <math.h>
int main()
{
    int gd = 0, gm, x1, y1, x2, y2, x3, y3;
    double s, c, angle;
    initgraph(&gd, &gm, NULL);
    setcolor(RED);
    printf("Enter coordinates of triangle: ");
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    setbkcolor(WHITE);
    cleardevice();
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();
    setbkcolor(BLACK);
    printf("Enter rotation angle: ");
    scanf("%lf", &angle);
    setbkcolor(WHITE);
    c = cos(angle * M_PI / 180);
    s = sin(angle * M_PI / 180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    x3 = floor(x3 * c + y3 * s);
    y3 = floor(-x3 * s + y3 * c);
    cleardevice();
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();
    closegraph();
    return 0;
}
// C++ program to rotate an object by
// a given angle about a given point
/*#include <iostream>
#include <math.h>
using namespace std;

// Using macros to convert degree to radian
// and call sin() and cos() as these functions
// take input in radians
#define SIN(x) sin(x * 3.141592653589 / 180)
#define COS(x) cos(x * 3.141592653589 / 180)

// To rotate an object given as order set of points in a[]
// (x_pivot, y_pivot)
void rotate(float a[][2], int n, int x_pivot, int y_pivot,
            int angle)
{
    int i = 0;
    while (i < n)
    {
        // Shifting the pivot point to the origin
        // and the given points accordingly
        int x_shifted = a[i][0] - x_pivot;
        int y_shifted = a[i][1] - y_pivot;

        // Calculating the rotated point co-ordinates
        // and shifting it back
        a[i][0] = x_pivot + (x_shifted * COS(angle) - y_shifted * SIN(angle));
        a[i][1] = y_pivot + (x_shifted * SIN(angle) + y_shifted * COS(angle));
        cout << "(" << a[i][0] << ", " << a[i][1] << ") ";
        i++;
    }
}

// Driver Code
int main()
{
    // 1st Example
    // The following figure is to be
    // rotated about (0, 0) by 90 degrees
    int size1 = 4; // No. of vertices
    // Vertex co-ordinates must be in order
    float points_list1[][2] = {{100, 100},
                               {150, 200},
                               {200, 200},
                               {200, 150}};
    rotate(points_list1, size1, 0, 0, 90);

    // 2nd Example
    // The following figure is to be
    // rotated about (50, -50) by -45 degrees
    /*int size2 = 3;//No. of vertices
    float points_list2[][2] = {{100, 100}, {100, 200},
                                {200, 200}};

*/