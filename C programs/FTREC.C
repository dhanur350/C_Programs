#include <stdio.h>
void main()
{
  int fact(int n);
  int m;
  printf("Enter a number : ");
  scanf("%d", &m);
  printf("Factorial of %d = %ld", m, fact(m));
}

int fact(int n)
{
  if (n == 0)
    return;
  else
    return n * fact(n - 1);
}