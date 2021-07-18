main()
{
    int day1, mon1, year1,day2, mon2, year2;
    int day_diff, mon_diff, year_diff;
    long int totaldays;
    clrscr();
    printf("\n Enter start date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &mon1, &day1, &year1);
    printf("\n Enter end date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &mon2, &day2, &year2);
    day_diff = day2 - day1;
    mon_diff = mon2 - mon1;
    year_diff = year2 - year1;
    totaldays = (year_diff*365)+(mon_diff*30)+day_diff;
    printf("\n Difference: %d years %02d months and %02d days.", year_diff, mon_diff, day_diff);
    printf("\n Total Days in them : %d",totaldays);
    getch();
}
