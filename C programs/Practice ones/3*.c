#include<stdio.h>
int main()
{
  int l,i=0,j=3,k=2;
  l=i||j++&&++k;
  printf("\n %d %d %d %d",i,j,k,l);
  return 0;
}