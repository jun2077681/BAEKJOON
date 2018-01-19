#include <stdio.h>

int main(void)
{
    int a[5];
    int b;
    int num;
    for (int i = 0; i < 5; i++)
    {
        a[i] = 0;
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &b);
            a[i] += b;
        }
    }

    int big = a[0];

    for (int i = 0; i < 5; i++)
    {
        if (a[i] >= big)
        {
            big = a[i];
            num = i + 1;
        }
    }

    printf("%d %d", num, big);
}
