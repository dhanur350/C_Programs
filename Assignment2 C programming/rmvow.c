#include <stdio.h>
#include <string.h>
void main()
{
    int checkvowel(char);
    char s[100], t[100];
    int c, d = 0;
    printf(" Enter a string to delete vowels\n");
    fgets(s,100,stdin);
    for (c = 0; s[c] != '\0'; c++)
    {
        if (checkvowel(s[c]) == 0)
        { // If not a vowel
            t[d] = s[c];
            d++;
        }
    }
    t[d]='\0';
    strcpy(s, t); // We are changing initial string. This is optional.
    printf("String after deleting vowels: %s\n", s);
}
int checkvowel(char letter)
{
    if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' ||
        letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U')
        return 1;
    return 0;
}