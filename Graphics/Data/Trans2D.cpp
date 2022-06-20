#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
// function to translate point
void translatePoint(int P[], int T[])
{
    /* init graph and putpixel are used for
    representing coordinates through graphical
    functions
    */
    int gd = DETECT, gm, errorcode;
    initgraph(&gd, &gm, NULL);
    cout << "Original Coordinates :" << P[0] << "," << P[1];
    putpixel(P[0], P[1], 1);
    // calculating translated coordinates
    P[0] = P[0] + T[0];
    P[1] = P[1] + T[1];
    cout << "\nTranslated Coordinates :" << P[0] << "," << P[1];
    // Draw new coordinates
    putpixel(P[0], P[1], 3);
    delay(1000);
    closegraph();
}

// driver program
int main()
{
    int P[2] = {5, 8}; // coordinates of point
    int T[] = {2, 1};  // translation factor
    translatePoint(P, T);
    delay(10000);
    return 0;
}
