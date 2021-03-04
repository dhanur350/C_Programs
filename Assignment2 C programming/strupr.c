/* C program to convert lowercase to uppercase string using strupr()
  Warning this program will only run in turbo C compiler */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
  char str[50];
  /* Input string from user */
  printf("Enter your text : ");
  fgets(str, 50, stdin);
  toupper(str); // Convert to uppercase
  printf("Uppercase string : %s", str);
}