#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void own_print(char *c){
    while (*c != '\0')// c[i] == *(c + i)
    {
        printf("%c ", *c);
        c++;
    }
        printf("\n");
}

int main()
{
    char c[] = "hall";
    c[0] = 'j';
    c[1] = 'o';
    c[2] = 'h';
    c[3] = 'n';
    c[4] = '\0';
    int x = strlen(c);
    int size = sizeof(c);

    printf("%s\n", c);
    printf("len = %d\n", x);
    printf("size in byte = %d\n", size);

    char *c2 = c;
    // printf("c2 = %x (%d)\n",c2,c2);
    printf("c2 = %c (%d)\n",*c2, *c2);
    c2++;
    printf("c2 = %c (%d)\n",*c2, *c2);
    printf("*******************\n");


    own_print(c);
    printf("*******************\n");
    char *a = "hola";
    own_print(a);
    printf("*******************\n");
    printf("a = %s\n", a);
    printf("*a = %c\n", *a);
    printf("*(a+1) = %c\n", *(a+1));

    return 0;
}