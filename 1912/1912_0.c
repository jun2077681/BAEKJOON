#include <stdio.h>
#include <string.h>
#include <limits.h>

int sum_of_arr(int *arr, int n);
int max(int a, int b);

int main()
{
    int N;
    scanf("%d", &N);

    int *a = (int*)malloc(sizeof(int)*N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d", sum_of_arr(a, N));
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int sum_of_arr(int *arr, int n)
{
    int ret = INT_MIN;
    int psum = 0;

    for (int i = 0; i < n; i++)
    {
        psum = arr[i] + max(psum, 0);
        ret = max(psum, ret);
    }
    return ret;
}
