main()
{
    long int recfn(long int num);
    long int num, rec;
    clrscr();
    printf("\n ***Program of adding 5 digits \n");
    printf("      entered using Recursion***");
    printf("\n Enter any 5 digit number: ");
    scanf("%ld", &num);
    rec = recfn(num);
    printf("\n Sum of 5 numbers using recursion: %ld",rec);
    getch();
}
long int recfn(long int num)
{
    if(num==0)
    return 0;
    else
    return (num % 10 + recfn(num/10) );
}
