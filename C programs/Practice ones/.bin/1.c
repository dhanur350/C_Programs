#include <stdio.h>

int main()

{

  int x = 35, y = 10;

  x = y++ + x++;

  y = ++y + ++x;

  printf("%d %d", x, y);
}
