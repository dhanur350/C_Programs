#include<stdio.h>
int main()
{
  int x=55,y=20;
  x=y++ + x++;
  y=++y + ++x;
  printf("\n %d %d",x,y);
}