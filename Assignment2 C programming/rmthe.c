#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf(" Enter any sentence below \n ");
    printf("-> ");
    fgets(str, 100, stdin);
    int i;
    for (i = 0; str[i] != 0; i++)
    {
        if ((str[i] == 116 && str[i + 1] == 104 && str[i + 2] == 101 && str[i + 3] == 32)
            ||(str[i] == 84 && str[i + 1] == 72 && str[i + 2] == 69 && str[i + 3] == 32))
            {
                for (; str[i + 4] != 0; i++)
                    str[i] = str[i + 4];
                str[i] = '\0';
                i = -1;
            }
    }
    printf("\n%s", str);
}