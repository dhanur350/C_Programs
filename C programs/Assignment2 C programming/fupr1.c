// C++ program to convert
// all lower case characters of a file
// into Upper Case
#include <stdio.h>
#include <ctype.h>
int main()
{
    // initializing the file pointer
    FILE *fptr;

    // name of the file as sample.txt
    char file[50] = {"test1.txt"};
    char ch;

    // opening the file in read mode
    fptr = fopen("/home/dhanur/Documents/test1.txt", "r");

    // converting into upper case
    while (ch != EOF)
    {

        // converting char to upper case
        ch = toupper(ch);
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    // closing the file
    fclose(fptr);

    return 0;
}
