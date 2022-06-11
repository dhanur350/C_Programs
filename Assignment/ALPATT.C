main()
{
    int i, j, k,sp;
    clrscr();
    printf("\n ***** Alphabets Pattern by DK ****** \n");
    //print 7th row
    for(i=0;i<=6;i++)
    {
        for(j=65;j<=71-i;j++) //loop for first half
        {
            printf("%c",j);
        }
        //add space between these string
        for(sp=1;sp<=i*2-1;sp++)
            printf(" ");

        for(k=71-i;k>=65;k--) //loop for next half (Second half)
        {
            if(k==71);
            else
                printf("%c", k);
        }
    printf("\n");
    }
}