#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void Func(int (*A)[2][2]){ //argument = 3D array OR A[][2][2]
printf("%d\n",*(*(*(A+2)+1)+1)); //13
}

int main()
{
    // int B[2][3];
    // printf("B = %d\n", B);
    // printf("&B[0] = %d\n", &B[0]);
    // printf("*******************\n");
    // printf("*B = %d\n", B);
    // printf("B[0] = %d\n", B[0]);
    // printf("&B[0][0] = %d\n", &B[0][0]);

    int c[3][2][2] = {{{2, 5}, {7, 9}},
                      {{3, 4}, {6, 1}},
                      {{0, 8}, {11, 13}}};
    int a[2] = {1,2};
    int b[2][3] = {{2,4,6},{5,7,8}}; // B returns int (*)[3]
    Func(c);
    return 0;
}