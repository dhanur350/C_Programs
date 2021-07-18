#include<stdio.h>
int main()
{
  int x=10,y=30;
  x=y++ + x--;
  y=++y + --x;
  printf("\n %d %d",x,y);
  return 0;
}