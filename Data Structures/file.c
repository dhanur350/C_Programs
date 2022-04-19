#include <stdio.h>
#include <ctype.h>
void main()
{
    char ch;
    char file[50] = {"text.txt"};
    FILE *fp, *fp2; // fp3
    fp2 = fopen("/home/dhanur/Asgn/text1.txt", "w");
    fp = fopen("/home/dhanur/Asgn/text.txt", "r");
    if (fp2 == NULL)
        printf("\n File not opened");
    while (1) // true loop
    {
        ch = fgetc(fp);
        if (ch == EOF) // End of FILE "\0 or \n break;"
            break;
        printf("%c", ch);
        fputc(ch, fp2);
    }
    printf("\n File copied to your provided directory \n");
    fclose(fp);
    fclose(fp2);
    /*printf(" File converted to UPPERCASE LETTER check your folder\n");
    printf(" Now the new data with uppercase character is \n");
    fp3 = fopen("/home/dhanur/Asgn/text1.txt", "r");
    ch = fgetc(fp3);
    while (ch != EOF) // converting char to upper case
    {
        ch = toupper(ch);
        if (ch == EOF)
            break;
        printf("%c", ch);
        ch = fgetc(fp3);
    }
    fclose(fp3);*/
}
