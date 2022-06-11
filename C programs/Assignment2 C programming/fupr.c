#include <stdio.h>
#include <ctype.h>
int main() // How many arguments -> 3 argc,argv,environment variables
{
    FILE *fp, *fp2, *fp3;
    char ch;
    char file[50] = {"test.txt"};
    fp2 = fopen("/home/dhanur/Downloads/test1.txt", "w");
    fp = fopen("/home/dhanur/test.txt", "r");
    if (fp2 == NULL)
        printf("\n File not opened");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
        fputc(ch, fp2);
    }
    printf(" File copied to your provided directory \n");
    printf(" File converted to UPPERCASE LETTER check your folder\n");
    printf(" Now the new data with uppercase character is \n");
    fp3 = fopen("/home/dhanur/Downloads/test1.txt", "r");
    ch = fgetc(fp3);
    while (ch != EOF)
    {
        // converting char to upper case
        ch = toupper(ch);
        if(ch==EOF)
        break;
        printf("%c", ch);
        ch = fgetc(fp3);
    }
    fclose(fp);
    fclose(fp2);
    fclose(fp3);
    return 0;
}