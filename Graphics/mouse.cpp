// C++ program to show how to
// enable Graphics mode
#include <iostream.h>
#include <conio.h>
#include <graphics.h>

// Driver Code
int main()
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

    errorcode = graphresult();

    // If error occurs
    if (errorcode == grOk)
        cout << "Graphics enabled: \n"
             << grapherrormsg(errorcode);
    else
        cout << "Graphics error: \n"
             << grapherrormsg(errorcode);

    getch();

    // Close the graph init()
    closegraph();
    return 0;
}
