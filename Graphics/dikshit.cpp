// WAP in c++ to display results of a search algorithm in animated form :-

#include <iostream>
#include <graphics.h>

using namespace std;
int main()
{
    int gd = DETECT, gm;
    int arr[5] = {4, 6, 8, 10, 3}, size = 5, find_value = 8, flag = 0;
    int x = 25, y = 160, radius = 5;
    initgraph(&gd, &gm, (char *)"");
    int x1 = 0, y1 = 100, x2 = 50, y2 = 140, left = 20;
    char str[3];
    settextstyle(3, 0, 3);

    for (int i = 0; i < size; i++)
    {
        x1 = x1 + 50;
        x2 = x2 + 50;
        rectangle(x1, y1, x2, y2);
        sprintf(str, "%d", arr[i]);
        left = left + 50;
        outtextxy(left, 110, str);
        x = x + 50;
        circle(x, y, radius);
    }
    x = 25;
    y = 160;
    for (int i = 0; i < size; i++)
    {
        x = x + 50;
        circle(x, y, radius);

        if (arr[i] == find_value)
        {
            setfillstyle(SOLID_FILL, 2);
            floodfill(x + 1, y + 2, WHITE);

            delay(1000);
            flag = 1;
            break;
        }
        delay(1000);
    }

    if (flag == 1)
    {
        outtextxy(200, 200, (char *)"Element Found");
    }
    else
    {
        outtextxy(200, 200, (char *)"Element not Found");
    }
    getch();
    closegraph();
    return 0;
}