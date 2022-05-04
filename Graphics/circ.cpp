// C code to illustrate using
// graphics in linux environment
#include <graphics.h>
int main()
{
	int gd = DETECT, gm;
	int right = INT_MAX;
	int bottom = INT_MAX;
	initgraph(&gd, &gm, NULL);

	circle(50, 50, 30);

	delay(500000);
	closegraph();
	return 0;
}
