#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)


quick(int x[], int L, int R)
{
    int i = L, j = R, tmp;
    int pivot = x[(L + R) / 2];

    while (i <= j)
    {
        while (x[i] < pivot)
            i++;
        while (x[j] > pivot)
            j--;

        if (i <= j)
        {
            tmp = x[i];
            x[i] = x[j];
            x[j] = tmp;
            i++, j--;
        }
    }
    if (L < j)
        quick(x, L, j);
    if (i < R)
        quick(x, i, R);
}


int main(void)
{
    int N;
    scanf("%d", &N);
    int temp = N;
    int count = 0;
    while (temp)
    {
        temp /= 10;
        count++;
    }
    int *a;
    a = (int*)malloc(sizeof(int)*count);
    for (int i = 0; i < count; i++)
    {
        a[i] = N % 10;
        N /= 10;
    }
    quick(a, 0, count - 1);
    for (int i = count-1; i >= 0; i--)
        printf("%d", a[i]);
}
