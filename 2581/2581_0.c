#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int M, N;
    scanf("%d %d", &M, &N);
    int Prime[10001];
    int small = -1;
    int sum = 0;
    int o = sqrt(N);
    for (int i = 2; i <= N; i++)
    {
        Prime[i] = 1;
    }
    for (int i = 2; (Prime[i] == 0) || (i <= o); i++)
    {
        for (int j = 2; j*i <= N; j++)
        {
            Prime[j*i] = 0;
        }
    }
    for (int i = M; i <= N; i++)
    {
        if (Prime[i])
        {
            if (small == -1)
                small = i;
            sum += i;
        }
    }
    if (sum != 0)
        printf("%d\n%d", sum, small);
    else
        printf("-1");
}
