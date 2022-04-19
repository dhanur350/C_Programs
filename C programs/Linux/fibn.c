#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char *argv[])
{
    int k, pid, i = 0, j = 0;
    int sum = 1;
    int num = atoi(argv[1]);
    if (argc == 0)
    {
        printf("Please enter a number to fibonacci sequence");
    }
    pid = fork();
    if (pid == 0)
    {
        for (k = 1; k < num; k++)
        {
            i = j;
            j = sum;
            sum = i + j;
            printf("Fibonacci seqence is: %d\n", sum);
        }
    }
    else
    {
        wait(NULL);
        printf("parent is waiting for child\n");
    }
    return 0;
}