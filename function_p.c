#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int Add(int a, int b)
{
    return a + b;
}

void printHello(char *name)
{
    printf("hello %s\n", name);
}

int main()
{
    int c,d;
    // pointer to function that should take
    //  (int, int) as argument/parametr and return int
    int (*p)(int, int);
    p = &Add;
    c = (p)(8, 3);
    d = (*p)(8, 3);

    printf("c = %d\n", c);
    printf("d = %d\n", d);

    void (*ptr)();
    ptr = printHello;
    ptr("Dick");

    return 0;
}