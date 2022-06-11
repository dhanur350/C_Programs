main()
{
 int x,y,z,perc;
 printf("\n Enter the marks of 1st subject . ");
 scanf("%d",&x);
 printf("\n Enter the marks of 2nd subject . ");
 scanf("%d",&y);
 printf("\n Enter the marks of 3rd subject . ");
 scanf("%d",&z);
 perc=(x+y+z)/3;
 printf("\n Percentage of Student . %d",perc);
 if(perc>=60)
 {
 printf("\n Student is in 1st division . ");
 }
 else if(perc>50&&perc<40)
 {
 printf("\n Student is in 2nd division . ");
 }
 else if(perc>49&&perc<40)
 {
 printf("\n Student is in 3rd division . ");
 }