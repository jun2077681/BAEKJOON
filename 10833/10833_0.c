#include <stdio.h>
#include <string.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int sum = 0;
    for (int aa = 0; aa < N; aa++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        sum = sum + b%a;
    }
    printf("%d", sum);
}
