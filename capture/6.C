main()
{
int no;
clrscr();
printf("\n Enter the no. ");
scanf("%d",&no);
printf("factorial is %d",fact(no)); // here return 1 but why print 1?

return 0;
}

int fact(int n)
{
if(n>=1)  // 3
return n*fact(n-1);   /* 3*fact(3-1) -> 3*2 fact(2-1) ->
			 3*2*1 fact(1-1)    */
else
return 1;	     //recursion terminated but why return 1 ?
}
/* add 2 no.s with help of recursion
5+7=12
5+6=11
5+5=10
5+4=9
5+3=8
a=5, b=3 a++,b--,if b=0,break;
*/


