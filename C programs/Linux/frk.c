// C program to illustrate
// open system call
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
int errno;
int main()
{
    // if file does not have in directory
    // then file abc is created.
    int fd = open("abc", O_RDONLY | O_CREAT);
    pid_t cpid; /*To make child process from parent we use typedef
    and for that <stdlib.h> and other process use we'll use <sys/wait.h>*/
    printf("fd = %d\n", fd);

    if (fd == -1)
    {
        // print which type of error have in a code
        printf("Error Number % d\n", errno);

        // print program detail "Success or failure"
        perror("Program");
    } /*Fork command calls system for making a process
     to use fork in linux we use fork() and for that we use header file <unistd.h>*/
    if (fork() == 0)
        exit(0); // terminate child
    else
        cpid = wait(NULL); // reaping parent
    // Get the process ID of the calling process we use getpid().
    printf("\nParent pid = %d\n", getpid());
    printf("Child pid = %d\n", cpid);
    return 0;
}
/**C program to demonstrate working of wait()
#include<stdio.h>
int main()
{
    pid_t cpid;
    if (fork()== 0)
        exit(0);		 //terminate child
    else
        cpid = wait(NULL); // reaping parent
    printf("Parent pid = %d\n", getpid());
    printf("Child pid = %d\n", cpid);

    return 0;
}
*/