int i;
main()
{
clrscr();
printf("\n i = %d",i);
increment();
increment();
decrement();
decrement();
}
increment()
{
i=i+1;
printf("\n Non incrementing i=%d",i);
}
decrement()
{
i=i-1;
printf("\n Non decrementing i=%d",i);
}