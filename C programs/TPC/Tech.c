#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, p, s, ar;
  printf("\nPlease Enter three sides of triangle\n");
  scanf("%f%f%f",&a,&b,&c);
  p = a+b+c;
  s = (a+b+c)/2;
  ar = sqrt(s*(s-a)*(s-b)*(s-c));
  printf("\n Perimeter of Traiangle = %.2f\n", p);
  printf("\n Semi Perimeter of Traiangle = %.2f\n",s);
  printf("\n Area of triangle = %.2f\n",ar);
  return 0;
}