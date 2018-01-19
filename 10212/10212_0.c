#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int a[100];
    int p = &a[time(NULL)%100];

    int c, d;

    c = p % 1000;
    d = (p - c) / 1000;
    if (d%2)
        printf("Korea");
    else
        printf("Yonsei");
}
