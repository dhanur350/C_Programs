main()
{
    long int fibo(long int);
    long int num,c=0,i;
    clrscr();
    num=25;
    printf("Fibonacci Series: ");
    for(i=1;i<=num;i++)
    {
	printf(" %ld ", fibo(c));
	c++;
    }
    getch();
}
long int fibo(long int num)
{
    if(num==0)
	return 0;
    else if(num==1)
	return 1;
    //fibonacci = 1 1 2 3 5 8
    // where n = (n-1) + (n-2)
    else
	return (fibo(num-1)+fibo(num-2));
}