#include <graphics.h>
#include <iostream>
#pragma GCC diagnostic ignored "-Wwrite-strings"
using namespace std;
int main()
{
	int gdriver = DETECT, gm;
	initgraph(&gdriver, &gm, NULL);
	int left = 0, top = 100, right = 50, bottom = 140;
	int left1 = 20;
	int Left = 0, Right = 50;
	int size = 10;
	int searched_element = 22;
	int flag = 0;
	// Header
	outtextxy(300, 20, "Linear Search");
	line(300, 50, 390, 50);
	outtextxy(50, 60, "Searched Element is : 22 ");
	// create empty array-boxes.
	for (int i = 0; i < size; i++)
	{
		left = left + 50;
		right = right + 50;
		rectangle(left, top, right, bottom);
		delay(500);
	}
	// create array with elements
	char arr[size] = {2, 5, 7, 8, 9, 4, 22, 11, 23, 100};
	char str[size];
	for (int i = 0; i < size; i++)
	{
		left1 = left1 + 50;
		sprintf(str, "%d", arr[i]);
		outtextxy(left1, 110, str);
		delay(500);
	}
	// create colored rectangle
	for (int i = 0; i < size; i++)
	{
		setfillstyle(WIDE_DOT_FILL, LIGHTGRAY);
		Left = Left + 50;
		Right = Right + 50;
		rectangle(Left, top, Right, bottom);
		floodfill(Left + 1, top + 1, WHITE);
		if (arr[i] == searched_element)
		{
			flag++;
			break;
		}
		delay(800);
		setfillstyle(EMPTY_FILL, 0);
		floodfill(Left + 1, top + 1, WHITE);
	}
	if (flag == 1)
	{
		outtextxy(left - 300, 210, "Searched Element is found");
	}
	else
	{
		outtextxy(left - 300, 210, "Searched Element is not found");
	}
	getch();
	closegraph();
	return 0;
}
