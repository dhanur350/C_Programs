main()
{
    int a,b,c,large;
    clrscr();
    a=10; b=20; c=30; //Value Initialised
    large=(a>b)?(a>c?a:c):(b>c?b:c); // large no concept
    printf("\n Largest no. is %d ",large);
    getch();
}