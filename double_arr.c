#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void Double(int *A, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        A[i] = 2 * A[i];
    }
}

int main()
{
    int A[] = {2, 7, 6, 8};
    int size = sizeof(A) / sizeof(A[0]);
    printf("size of arr =  %d\n", size);

    int *p = A;
    printf("A = [");

    for (int i = 0; i < size; i++)
    {
        printf("%d", A[i]);
        if (i < (size - 1))
        {
            printf(",", A[i]);
        }
    }
    printf("]\n");

    Double(A, size);
    printf("A = [");

    for (int i = 0; i < size; i++)
    {
        printf("%d", A[i]);
        if (i < (size - 1))
        {
            printf(",", A[i]);
        }
    }
    printf("]\n");

    return 0;
}