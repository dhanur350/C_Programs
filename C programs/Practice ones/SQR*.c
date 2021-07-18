
void main() //not returning any value
{
float a,b;
float sqr(float);
printf("\n Enter any number : ");
scanf("%f",&a);
b=sqr(a);
printf("\n Square of %f is : %f",a,b);
getch();
}
float sqr(float x)
{
float z;
z=x*x;
return (z);
}



