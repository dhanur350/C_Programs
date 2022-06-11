#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int i, pos;
    fp = fopen("/home/dhanur/dk.txt", "r");
    if (fp == NULL)
    {
        printf("File does not exist..");
    }
    printf(" Original Contents in a file \n:");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    fseek(fp, 0, SEEK_END);
    pos = ftell(fp);
    //printf("Current postion is %d\n",pos);
    i = 0;
    while (i < pos)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        //printf("%c",fgetc(fp));
        ch = fgetc(fp);
        printf("%c", ch);
    }
    return 0;
}