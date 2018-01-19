#include <stdio.h>

int minimum(int a, int b);
int bin2(int n, int k);

int main(void)
{
    int T, N, M;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &N, &M);
        printf("%d\n", bin2(M, N));
    }
}

int bin2(int n, int k) 
{
    int i, j;
    int **B = (int**)malloc(sizeof(int*)*(n+1));
    for (int i = 0; i < (n+1); i++)
        B[i] = (int*)malloc(sizeof(int)*(k+1));

    for (i = 0; i <= n; i++)
        for (j = 0; j <= minimum(i, k); j++)
        {
            if (j == 0 || j == i)
            {
                B[i][j] = 1;
            }
            else
            {
                B[i][j] = B[i - 1][j - 1] + B[i - 1][j];
            }
        }
    return B[n][k];
}

int minimum(int a, int b)
{
    return a > b ? b : a;
}
