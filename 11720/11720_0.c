#include <stdio.h>

int main(void)
{
    int N;
    int sum = 0;
    scanf("%d", &N);
    for (int i = 0; i <= N; i++)
    {
        sum = sum + getchar() - 48;
    }
    printf("%d", sum+38);
}
