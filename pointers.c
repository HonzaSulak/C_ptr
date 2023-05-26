#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int count = 10;
    char a[count], *pa;

    pa = &a[0];
    char *x = pa;

    for (int i = 0; i < count; i++)
    {
        a[i] = i + 65;
    }
    for (int j = 0; j < count; j++)
    {
        printf("%c ", a[j]);
    }

    printf("\n");
    *(x + 2)= '-';
    for (int k = 0; k < count; k++)
    {
        printf("%c ", *(x));
        x++;
    }
    printf("\n");

    return 0;
}