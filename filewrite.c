#include <stdio.h>
#include <stdlib.h>
int main()
{
   char data[30];
   FILE *fptr;
   // use appropriate location if you are using Windows or Linux
   fptr = fopen("/home/dhanur/Documents/test3.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   printf("Enter char: ");
   scanf("%c",&data);
   fputc(fptr,data);
   fclose(fptr);
   return 0;
}