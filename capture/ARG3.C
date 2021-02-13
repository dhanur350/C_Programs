#include<stdio.h>
main()
{
FILE *fp;
char c;
clrscr();
fp=fopen("c:\\tc\\bin\\d5.txt","r");
while(1)
{
c=fgetc(fp);
if(c==EOF)
break;
if( c!= '  ')
printf("%c",c);
}
fclose(fp);
getch();
}