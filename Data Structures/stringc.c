#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char string[60];
    int i;
    printf(" Enter any line :- ");
    fgets(string, 60, stdin); //fgets to store string entered via keyboard
    for (i = 0; string[i] != 0; i++)
    {
        if (string[i] == 32 && string[i + 1] == 32)
        {
            for (; string[i + 1] != 0; i++)
            {
                string[i] = string[i + 1];
            }
            string[i] = '\0';
            i = 0;
        }
    }
    printf("\n After removing space : %s", string);
}