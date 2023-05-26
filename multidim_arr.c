#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int B[2][3];
    printf("B = %d\n", B);
    printf("&B[0] = %d\n", &B[0]);
    printf("*******************\n");
    printf("*B = %d\n", B);
    printf("B[0] = %d\n", B[0]);
    printf("&B[0][0] = %d\n", &B[0][0]);

    return 0;
}