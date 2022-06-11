#include<stdio.h>
void main()
{
  int l,i=0,j=1,k=2;
  l=i||j++&&++k;
  printf("%d %d %d %d",i,j,k,l);
}