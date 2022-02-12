#include<stdio.h>
void main()
{
    long int num,r;
    static int sum;
    printf(" Enter the required number ");
    scanf("%ld",&num);
    while(num)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf(" Sum is %d\n",sum);
    if(sum%3==0)
       printf(" %d is divisible by 3",sum);
    else
       printf(" %d is not divisible by 3",sum);
}