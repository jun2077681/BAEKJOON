#include <stdio.h>

int minimum(int a, int b, int c);

int main(void)
{
    int N;
    scanf("%d", &N);

    int *a = (int*)malloc(sizeof(int)*(N+1));
    a[0] = 0;
    a[1] = 0;

    if (N == 1)
    {
        printf("%d", 0);
        return 0;
    }
    for (int i = 2; i <= N; i++)
    {
        int case1 = a[i - 1] + 1;
        int case2 = i % 2 == 0 ? (a[i / 2] + 1) : (N + 1);
        int case3 = i % 3 == 0 ? (a[i / 3] + 1) : (N + 1);

        a[i] = minimum(case1, case2, case3);
    }

    printf("%d", a[N]);
}

int minimum(int a, int b, int c)
{
    return a > b ? (b > c ? c : b) : (a > c ? c : a);
}
