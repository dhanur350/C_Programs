main()
{
int num;
char charac;
clrscr();
printf("\n***Program to determine the character or number entered***");
printf("\n Enter any symbol or character :");
scanf("%c",&charac);
num=charac;

//For capital letters condition (A to Z)
if(num>=65&&num<=90)
printf("\n** %c is a CAPITAL Letter **",charac);

//For small characters condition (a to z)
else if(num>=97&&num<=122)
printf("\n** %c is a small Letter **",charac);

//For digits (0 to 9)
else if(num>=48&&num<=57)
printf("\n** %d is a digit **",num);

//For special symbols
else if(num>=0&&num<=47 || num>=58&&num<=64 || num>=91&&num<=96 || num>=123&&num<=127)
printf("\n** ' %c 'is it's ASCII value and it is a Special Symbol **");

getch();
}
