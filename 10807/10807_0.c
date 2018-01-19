#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    int count = 0;
    scanf("%d", &N);
    int *a;
    a = (int*)malloc(sizeof(int)*N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);
    int v;
    scanf("%d", &v);
    for (int i = 0; i < N; i++)
    {
        if (a[i] == v)
        {
            count++;
        }
    }
    printf("%d", count);
}

