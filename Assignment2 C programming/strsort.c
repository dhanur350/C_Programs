#include <stdio.h>
#include <string.h>
void main()
{
    int i, j, n;
    char str[100][100], s[100];
    printf("Enter number of names \n");
    scanf("%d", &n);
    printf("Enter names in any order\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(s, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], s);
            }
        }
    }
    printf("\nThe sorted order of alphabets are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
}
/* Main logic of the program
The above logic is same as sorting an array but any how lets see what happens when compiling this logic
and how names are sorted
Lets take an 3 example names java,cprogram,android 

Iteration 1:i=0 and n is 3  0<3 →true so the loop executes

Iteration 1 of 2nd for loop:j=i+1→j=1,1<3 so true then 2nd loop is executed
str[0],str[1] is compared using strcmmp where str[0]→java and str[1]→cprogram and as 
java>cprogram then strcmp returns 1 which is >0 so the if part is executed.
then both are swapped their positions using the 3 statements which is similar to swapping 2 values.

Now the 3 names are in position cprogram,java,android

Iteration 2 of 2nd for loop:j=2,2<3 so true then 2nd loop is executed
str[0],str[2] is compared using strcmmp where str[0]→cprogram now and str[2]→android and as 
cprogram>android then strcmp returns 1 which is >0 so the if part is executed.
then both words are swapped

Now the 3 names are in position android,cprogram,java

Iteration 3 of 2nd for loop:j=3,3<3 so false then 2nd loop is terminated
Finallu the position of 3 names are  android,cprogram,java after 1st iteration of loop.

Iteration 2:i=1 ; 1<3 →true so the loop executes

Iteration 1 of 2nd for loop:j=1+1→j=2,2<3 so true then 2nd loop is executed
str[1],str[1] is compared using strcmmp where str[1]→cprogram and str[2]→java and as cprogram<java 
then strcmp returns -1 which is <0 so the if part is not executed.
So the names remains same in their position.

Iteration 2 of 2nd for loop:j=3,3<3 so false then 2nd loop is terminated
After 2nd Iterations the names remain same

Iteration 3:i=2 ;2<3 →true so the loop executes
Iteration 1 of 2nd for loop:j=2+1→j=3,3<3 so false loop is terminated

Iteration 4:i=3 ;3<3 →false so the loop terminates */