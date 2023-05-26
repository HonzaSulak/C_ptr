#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // int x = 5;
    // int *p = &x;
    // *p = 6;
    // int **q = &p;
    // int ***r = &q;
    // printf("*p = %d\n", *p);
    // printf("*q = %d\n", *q);
    // printf("**q = %d\n", **q);
    // printf("**r = %d\n", **r);
    // printf("***r = %d\n", ***r);

    int A[] = {2, 7, 6, 8};
    int count = sizeof(A) / sizeof(A[0]);
    printf("size of arr =  %d\n", count);

    int *p = A;
    for (int i = 0; i < count; i++)
    {
        printf("address = %d\n", &A[i]);
        printf("address = %d\n", (A + i));
        printf("value = %d\n", A[i]);
        printf("value = %d\n", *(A + i));
    }

    printf("value(p) = %d\n", *p);
    p++;
    printf("value(p++) = %d\n", *p);

    return 0;
}