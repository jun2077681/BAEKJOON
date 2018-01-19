#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void)
{
    int n,tmp;
    int count = 0;
    scanf("%d", &n);
    int a[101];
    for (int i = 0; i < 101; i++)
        a[i] = 0;
    int k = n;
    while (k--)
    {
        scanf("%d", &tmp);
        if (a[tmp] == 1)
            count++;
        a[tmp] = 1;
    }
    printf("%d", count);
}
