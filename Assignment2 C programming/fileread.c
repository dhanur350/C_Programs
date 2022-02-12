#include <stdio.h>
#include <stdlib.h>
void main()
{
   char ch;
   static int numline;
   FILE *fptr;
   printf(" CONTENT IN FILE ");
   fptr=fopen("/home/dhanur/dk.txt","r");
   while(1)
   {
       ch=fgetc(fptr);
       if(ch==EOF)
       break;
       printf("%c",ch);
       if(ch=='\n')
       numline++;
   }
   fclose(fptr);
   printf("Number of lines : %d",numline);  
}