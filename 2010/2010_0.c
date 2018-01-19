#include <stdio.h>

int main(void)
{
    int N;
    int answer = 1;
    int a;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a);
        answer = answer + a - 1;
    }
    printf("%d", answer);
}

