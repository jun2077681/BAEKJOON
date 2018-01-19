#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int M, N;
    scanf("%d %d", &N, &M);
    int **a;
    a = (int**)malloc(sizeof(int*)*N);
    for (int i = 0; i < N; i++)
    {
        a[i] = (int*)malloc(sizeof(int)*M);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int K;
    scanf("%d", &K);
    int i, j, x, y;
    int sum = 0;
    for (int d = 0; d < K; d++)
    {
        sum = 0;
        scanf("%d %d %d %d", &i, &j, &x, &y);
        for (int b = i-1; b <= x-1; b++)
        {
            for (int c = j-1; c <= y-1; c++)
            {
                sum += a[b][c];
            }
        }
        printf("%d\n", sum);
    }
}
