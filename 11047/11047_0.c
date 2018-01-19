#include <stdio.h>
#include <string.h>

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);
    int *a;
    a = (int*)malloc(sizeof(int)*N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    int count = 0;
    for (int i = N-1; i >=0; i--)
    {
        while (K - a[i] >= 0)
        {
            K -= a[i];
            count++;
        }
    }
    printf("%d", count);
}
