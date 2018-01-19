#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;

    scanf("%d", &N);
    if (N == 1)
        exit(0);
        double sqr = sqrt(N);
        int sq = (int)sqr;

        int *Prime;
        Prime = (int*)malloc(sizeof(int) * (sq + 1));
        Prime[0] = Prime[1] = 0;

        for (int i = 2; i < (sq + 1); i++)
        {
            Prime[i] = 1;
        }
        for (int i = 2; (Prime[i] == 0) || (i < (sq + 1)); i++)
        {
            for (int j = 2; j*i < (sq + 1); j++)
            {
                Prime[j*i] = 0;
            }
        }

        for (int i = 2; N > 1; i++)
        {
            if (i == sq + 1)
            {
                printf("%d", N);
                break;
            }
            if (Prime[i] != 1)
                continue;

            while (N%i == 0)
            {
                printf("%d\n", i);
                N /= i;
            }
        }
}

