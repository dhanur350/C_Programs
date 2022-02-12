main()
{
int add(int,int);
int a, b, r;
printf("Enter the two numbers:\n");
scanf("%d%d", &a, &b);
r = add(a, b);  
printf("\n Sum of two numbers is : %d ",r);
getch();
}
int add(int m, int n)
{
  int y;
    if(n == 0)
        return m;

    /*
        Recursion: adding 1, n times and 
        then at the end adding m to it
    */
    y = add(m, n-1) + 1;
    return y;   // return the result
}