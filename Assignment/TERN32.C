main()
{
    int a,b,c,large;
    clrscr();
    printf("\n Enter any 3 numbers : "); //Value Initialised
    scanf("%d%d%d",&a,&b,&c);
    large=(a>b)?(a>c?a:c):(b>c?b:c); // large number concept
    printf("\n Largest no. is %d ",large);
    getch();
}