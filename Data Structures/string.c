#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char *a;
    int byte_read;
    size_t size = 10;
    a = (char *)malloc(size);
    byte_read = getline(&a, &size, stdin);
    //fgets(a, sizeof(a), stdin);
    puts(a);
    //printf("%s", a);
}