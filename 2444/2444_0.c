#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i<N; i++)
    {
        for (int j = N - i - 1; j>0; j--)
            printf(" ");
        for (int j = 2 * i + 1; j>0; j--)
            printf("*");
        printf("\n");
    }
    for (int i = N-1; i>0; i--)
    {
        for (int j = N - i; j>0; j--)
            printf(" ");
        for (int j = 2 * i - 1; j>0; j--)
            printf("*");
        printf("\n");
    }
}

