main()
{
    int a,b,c;
    clrscr();
    printf("\n  Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    (((a>b)?printf("\n A is bigger "):printf("\n B is bigger ")&&((a>c)?printf("\n A is bigger"):printf("\n C is bigger"));
    getch();
}