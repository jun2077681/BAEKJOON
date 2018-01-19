#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

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
    int t;
    scanf("%d", &t);
    for (int aa = 0; aa < t; aa++)
    {
        int n;
        scanf("%d", &n);
        int *a;
        a = (int*)malloc(sizeof(int)*n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        quick(a, 0, n - 1);
        int k = a[n - 1] - a[0];
        printf("%d\n", k * 2);
    }
}
