main()
{
int d,c,i,s=1;  /* d^c d multiplied by c times */
 while(1)
 {
  printf("\n Enter the value of two numbers :");
  scanf("%d %d",&d,&c);
  if(c==100)
  exit(0);
  for(i=1;i<=c;i++)
  {
  s=s*d;
  }
  printf("Power number of d is %d",s);
  //getch();
 }
}