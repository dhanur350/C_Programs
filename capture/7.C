main()
{
   increment();
   increment(); //  3 times call
   increment();
}
increment()
{                         // local block start
   static int i;  // i = 0 initial default value
   printf("%d \n",i);   //  1
   i=i+1;   // i=1+1=2; i=2;
}                        //  local block finish