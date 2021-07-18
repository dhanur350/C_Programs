main()
{
 int i,j;
 i=5; j=2;
 clrscr();
 junk(&i,j);
 printf("\n %d \n %d",i,j);
}
 junk(int *i,int j)
 {
  *i=*i * *i;
  j=j*j;
 }