#include<stdio.h>
main()
{
FILE *fp;
char s[100];
fp=fopen("c:\\tc\\bin\\d5.txt","r");
while(fgets(s,99,fp)!=NULL)
printf("%s",s);
fclose(fp);
getch();
}




