#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
    int N;
    scanf("%d", &N);
    N++;
    long long int answer;
    answer = 3 * N - 1;
    answer *= N;
    answer /= 2;
    answer%=45678;
    printf("%llu", answer);
}
