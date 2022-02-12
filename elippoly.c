#include<graphics.h>
#include<math.h>

void draw(int x,int y,int h, int k)
{
    putpixel(x+h,y+k,GREEN);
    putpixel(-x+h,y+k,GREEN);
    putpixel(-x+h,-y+k,GREEN);
    putpixel(x+h,-y+k,GREEN);
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    int a=90,b=100,h=200,k=200,x,y,endx;
    x=0;
    y=b*sqrt(1-(x*x)/(a*a));
    endx=a;
while(x<endx)
{
draw(x,y,h,k);
x++;
y=b*sqrt(1-((x*x)*1.0/(a*a)));
}
getch();
closegraph();
return 0;
}