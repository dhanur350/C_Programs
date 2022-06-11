// C++ program to demonstrate calculation in parent and
// child processes using fork()
#include <stdio.h>
#include <unistd.h>

int main()
{
    int a[10];
    int sumOdd = 0, sumEven = 0, n, i;
    // Taking input from user
    printf("Enter 10 digits ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    n = fork();

    // Checking if n is not 0
    if (n > 0)
    {
        for (i = 0; i < 10; i++)
        {
            if (a[i] % 2 == 0)
                sumEven = sumEven + a[i];
        }
        printf("Parent process \n");
        printf("Sum of even no. is %d \n", sumEven);
    }

    // If n is 0 i.e. we are in child process
    else
    {
        for (i = 0; i < 10; i++)
        {
            if (a[i] % 2 != 0)
                sumOdd = sumOdd + a[i];
        }
        printf("Child process \n");
        printf("\nSum of odd no. is %d \n", sumOdd);
    }
    return 0;
}
