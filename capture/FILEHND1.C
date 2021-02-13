#include<stdio.h>
main() // How many arguments -> 3 argc,argv,environment variables
{
FILE *fp,*fp2;
char ch;
clrscr();
fp2=fopen("C:\\TC\\BIN\\d3.txt","w");
fp=fopen("C:\\Test2\\Test3\\d2.txt","r");
if(fp2==NULL)
printf("\n File not opened");
while(1)
{
ch = fgetc(fp);
if( ch == EOF )
break;
printf("%c",ch);
fputc(ch+100,fp2);
}
fclose(fp);
fclose(fp2);
getch();
}