#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)

long long int poww(long long int a, long long int b);

int main(void)
{
    long long int first, last;
    long long int answer = 0;

    scanf("%llu %llu", &first, &last);

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

    for (long long int i = 2; i <= 10000000; i++)
    {
        long long int P;
        if (Prime[i] == 1)
        {
            P = i;
        }
        else
            continue;

        for (long long int j = 2; j <= 100000000000000; j++)
        {
            if (poww(P, j) >= first)
            {
                if (poww(P, j) <= last)
                {
                    answer++;
                    if (P >= 50000)
                        break;
                }
                else
                {
                    break;
                }
            }
        }
    }

    printf("%llu", answer);
}

long long int poww(long long int a, long long int b)
{
    long long int k = 1;
    for (long long int i = 1; i <= b; i++)
    {
        k *= a;
    }
    return k;
}
