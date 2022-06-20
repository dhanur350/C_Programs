#include<graphics.h>

void main()
{
    int gd=DETECT,gm,left=10,top=10,right=620,down=450;
    initgraph(&gd,&gm,NULL);
    //10,10,620,450
    rectangle(left,top,right,down);
    delay(5000);
    closegraph();
}