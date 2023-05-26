#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n;
    printf("size?: \n");
    scanf("%d", &n);
    int *A = (int *)calloc(sizeof(int), n);
    printf("A = [");

    for (int i = 0; i < n; i++)
    {

        printf("%d", A[i]);
        if (i < (n - 1))
        {
            printf(",", A[i]);
        }
    }
    printf("]\n");
    int size;
    printf("resize?: \n");
    scanf("%d", &size);
    int B_s = size * sizeof(int);
    int *B = (int *)realloc(A, B_s);
    printf("B = [");

    for (int i = 0; i < size; i++)
    {
        if (i >= n)
        {
            B[i] = 9;
        }
        printf("%d", B[i]);
        if (i < (size - 1))
        {
            printf(",", B[i]);
        }
    }
    printf("]\n");
    free(B);

    return 0;
}