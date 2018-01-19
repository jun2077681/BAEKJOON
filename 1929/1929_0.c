#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
    int *Prime;
    Prime = (int*)malloc(sizeof(int) * 10000001);
    Prime[0] = Prime[1] = 0;

    for (int i = 2; i <= 10000000; i++)
    {
        Prime[i] = 1;
    }
    for (int i = 2; (Prime[i] == 0) || (i <= 10000000); i++)
    {
        for (int j = 2; j*i <= 10000000; j++)
        {
            Prime[j*i] = 0;
        }
    }

    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = N; i <= M; i++)
    {
        if (Prime[i])
            printf("%d\n", i);
    }
}
