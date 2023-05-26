#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void sayHello()
{
    printf("hello mf\n");
}

void findValue(int *num)
{
    *num = 39;
}

int *square(int *number)
{
    int square;
    square = *number * *number;
    *number = square;
    return number;
}
int main()
{
    sayHello();
    int x = 0xFEEDBEEF;
    int *ip = (int *)malloc(sizeof(int));
    // p = ip;
    void *p = &x;
    *ip = 0xC0C0;

    printf("sizeof(void *) = %zu\n", sizeof(p));
    printf("sizeof(int *) = %zu\n", sizeof(ip));

    printf("adresa p = %p(%x)\n", p, *(int *)p);
    printf("adresa ip = %p(%x)\n", ip, *ip);

    *(int *)p = 0xDEADBEEF;
    *ip = 0x00C0FFEE;
    printf("adresa ip = %p(%x)\n", ip, *ip);
    printf("adresa p = %p(%x)\n", p, *(int *)p);

    printf("ip +2 = %p\n", p, ip + 2);

    int arr[] = {1, 5, 8, 2};
    for (int i = 0; i < 4; i++)
    {
        printf("arr[%d] = %d\n", i, *(arr + i));
    }

    int y = 44;
    printf("y = %d\n", y);
    findValue(&y);
    printf("y = %d\n", y);
    int *ptr = &y;
    square(ptr);
    printf("y = %d\n", y);
    printf("ptr = %d\n", *ptr);

    free(ip);

    return 0;
}