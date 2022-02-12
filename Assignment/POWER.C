main()
{
    long int power(int,int);
    int base, exp ;
    clrscr();
    printf("\n ***Calculate a^b program by DK***");
    printf("\n Enter a base number: ");
    scanf("%d", &base);
    printf("\n Enter an exponent: ");
    scanf("%d", &exp);
    printf("\n Power answer %d ^ %d =",base,exp);
    power(base,exp);
    getch();
}
long int power(int base, int exp)
{
  int power=1;
  while (exp > 0)
    {
	power = power*base;
	exp--;
    }
    printf("  %d ",power);
}