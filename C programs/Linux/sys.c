/* C program to illustrate
    command line arguments*/
#include <stdio.h>
int main(int argc, char *argv[]) // To fetch arguments in compiling we use this method
{
    int counter;
    printf("Program Name Is: %s", argv[0]);
    if (argc == 1)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    if (argc >= 2)
    {
        printf("\nNumber Of Arguments Passed: %d", argc);
        printf("\n----Following Are The Command Line Arguments Passed----");
        for (counter = 0; counter < argc; counter++)
            printf("\nargv[%d]: %s\n", counter, argv[counter]);
    }
    if (argv[1] == argv[2])
    {
        printf("Same");
    }
    else
    {
        printf("Different");
    }
    return 0;
}
