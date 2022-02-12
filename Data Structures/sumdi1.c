#include <stdio.h>
// This function will check
// whether the given number is divisible
// by sum of its digits
int isDivisible(long int num) {
   long int temp = num;
   // Find sum of digits
   int sum = 0;
   while (num) {
      int k = num % 10;
      sum = sum + k;
      num = num / 10;
   }
   // check if sum of digits divides num
   if (temp % sum == 0)
      return 1;
      return 0;
}
int main() {
   long int num = 12111;
   if(isDivisible(num))
      printf("yes\n");
   else
      printf("no\n");
      return 0;
}