#include<stdio.h>
int main() // How many arguments -> 3 argc,argv,environment variables
{
FILE *fp,*fp2;
char ch;
fp2=fopen("/home/dhanur/Documents/test1.txt","w");
fp=fopen("/home/dhanur/Documents/test.txt","r");
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
}