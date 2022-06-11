#include<graphics.h>
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    circle(100,100,100);
    delay(6000); //6000 milisecond means 6 second
    closegraph();
}