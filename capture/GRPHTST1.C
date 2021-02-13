#include <graphics.h>
#include <stdlib.h>

void draw(int x,int y,int h,int k)
{
putpixel(h+x,k+y,GREEN);
delay(10);
putpixel(h-x,k+y,RED);
delay(10);
putpixel(h+x,k-y,BLUE);
delay(10);
putpixel(h-x,k-y,YELLOW);
delay(10);
putpixel(h+y,k+x,GREEN);
delay(10);
putpixel(h-y,k+x,RED);
delay(10);
putpixel(h+y,k-x,BLUE);
delay(10);
putpixel(h-y,k-x,YELLOW);
delay(10);
}

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 120;
   int stangle = 0, endangle = 360;
   int xradius = 100, yradius = 50;
   int x,y,h=300,k=240,r=140,d;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C://TC//BGI//");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

    x=0; y=r;
    d =  1 - r;
    draw(x,y,h,k);
    while(x<=y)
    {
     x++;
     if(d<0)
     {
     d=d+(2*x)+3;
     }
     else
     {
      y--;
      d=d+(2*(x-y))+5;
      }
      draw(x,y,h,k);
      }

   midx = 300;
   midy = 240;
   setcolor(YELLOW);
   outtextxy(260,240,"   DHANUR  ");
   setcolor(GREEN);

   /* draw the circle */
   circle(midx, midy, radius);

   /* draw ellipse */
   ellipse(midx, midy, stangle, endangle,
   xradius, yradius);

   /* clean up */
   getch();
   closegraph();
}