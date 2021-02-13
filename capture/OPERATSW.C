main()
{
  int a,b,opt,add,sub,multiply,mod;
  clrscr();
  printf("\n **Mini Calculator**");
  printf("\n Enter two numbers : ");
  scanf("%d%d",&a,&b);
  printf("\n What to do ? : \n");
  printf(" 1. Add \n 2. Subtract \n 3. Multiply \n 4. Modulus \n ");
  printf(" Select -> ");
  scanf("%d",&opt);
  switch(opt)
  {
  case 1: add=a+b;
  printf("\n Addition of two numbers : %d",add); break;
  case 2: sub=a-b;
  printf("\n Subtraction of two numbers : %d",sub);break;
  case 3: multiply=a*b;
  printf("\n Multiplication of two numbers : %d",multiply); break;
  case 4: mod=a%b;
  printf("\n Modulus of two numbers : %d",mod); break;
  default:
  printf("\n **ERROR!** **Wrong input**");
  }
  getch();
}