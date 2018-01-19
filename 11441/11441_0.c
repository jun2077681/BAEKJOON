#include <stdio.h>
#include <string.h>

int main(void)
{
    int N,M,k,l;
    scanf("%d", &N);
    int a[100000];
    int sum[100000];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
        if (i == 0)
            sum[i] = a[i];
        else
            sum[i] = sum[i - 1] + a[i];
    }
    scanf("%d", &M);
    for (int aa = 0; aa < M; aa++)
    {
        scanf("%d %d", &k, &l);
        if (k == 1)
            printf("%d\n", sum[l - 1]);
        else
            printf("%d\n", sum[l - 1] - sum[k - 2]);
    }
}
