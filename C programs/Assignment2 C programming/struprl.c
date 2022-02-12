/* C program to convert lowercase to uppercase string using strupr()
  Warning this program will only run in turbo C compiler */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
  int length,i;
  char *string="this is a string";
  length=strlen(string);
  for(i=0 ; i<length ; i++)
  {
    string[i]=toupper(string[i]);
  }
  printf("%s\n",string);
  return 0;
}