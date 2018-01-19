#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void)
{
    int a;
    scanf("%d", &a);
    int num[50000];
    num[0] = 0;
    num[1] = 1;
    for (int i = 2; i < 50000; i++)
    {
        num[i] = num[i - 1] + i;
    }
    a -= 2;
    if (a < 0)
    {
        printf("1");
    }
    else
    {
        a /= 6;
        for (int i = 0; i < 50000; i++)
        {
            if (a >= num[i] && a < num[i + 1])
            {
                printf("%d", i + 2);
                break;
            }
        }
    }
    return 0;
}
