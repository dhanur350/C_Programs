main()
{
long int num,digit1,digit2,digit3,digit4,digit5,temp;
clrscr();
printf("\n Enter the number : ");
scanf("%ld",&num);
temp=num;
/* Seperating digits */
digit1=num%10;
num=num/10;
digit2=num%10;
num=num/10;
digit3=num%10;
num=num/10;
digit4=num%10;
num=num/10;
digit5=num%10;
/* now add 1 to each digit */
digit1=((digit1+1)%10);
digit2=((digit2+1)%10);
digit3=((digit3+1)%10);
digit4=((digit4+1)%10);
digit5=((digit5+1)%10);
/* Showing result */
printf("\n Entered number was : %ld ",temp);
printf("\n Added number is : %ld%ld%ld%ld%ld",digit5,digit4,digit3,digit2,digit1);
getch();
}
