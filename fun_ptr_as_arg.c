#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void A()
{
    printf("hello\n");
}

void B(void (*ptr)())
{
    ptr();
}


int main()
{
    // void(*ptr)();
    // ptr = A;
    B(A);

    return 0;
}