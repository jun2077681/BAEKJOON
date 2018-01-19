#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    long long int fibo[91];

    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    printf("%llu", fibo[N]);
}

