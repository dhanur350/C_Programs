main()  
{  
    int year;
    clrscr();  
    printf("\n \n Enter the year :");
    scanf("%d", &year);
    if ((year % 4 == 0)&&(year % 100 != 0)||(year % 400 == 0))
    //Check if Year does give remainder from 4 and 400
    printf("\n %d is leap year\n", year);
    else
    printf("\n %d is not leap year\n", year);
    getch();
}  