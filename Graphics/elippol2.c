#include<graphics.h>
#define PI 3.141
void draw(int x,int y,int h, int k)
{
    putpixel(x+h+0.5,y+k+0.5,GREEN);
    putpixel(-x+h+0.5,y+k+0.5,GREEN);
    putpixel(-x+h+0.5,-y+k+0.5,GREEN);
    putpixel(x+h+0.5,-y+k+0.5,GREEN);
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    int a=90,b=100,h=200,k=200,x,y,endx;
    double theta =0.0;
    double thetaend=(PI*90)/180;
while(theta < a)
{
    double x=a*cos(theta);
    double y=b*sin(theta);
    draw(x,y,h,k);
    theta =theta +0.05;
}
closegraph();
return 0;
}