#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int left, top, right, bottom;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi\\");

   /* read result of initialization */


   /* draw a rectangle */
   printf("%d %d",getmaxx(),getmaxy());
   //use this to check max x and max y value at your desktop or laptop

   setlinestyle(0,0xA,3);//Line style solid,
   setcolor(RED);    //setting line color
   rectangle(0,0,600,420);
   setcolor(GREEN);
   rectangle(10,10,580,400);
   //coordinates value decreased to place rectangle in
   setcolor(YELLOW);
   rectangle(20,20,560,390);

   outtextxy(getmaxx()/2,getmaxy()/2,"Dhanur");///mid coordinates
   setcolor(GREEN);
   circle(getmaxx()/2,getmaxy()/2,100);
   setcolor(RED);
   circle(getmaxx()/2,getmaxy()/2,150);


   /* clean up */
   getch();
   closegraph();
   return 0;
}

