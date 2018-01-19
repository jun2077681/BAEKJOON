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
    int a[31];
    for (int i = 1; i < 31; i++)
        a[i] = 1;
    for (int i = 1; i < 29; i++)
    {
        int temp;
        scanf("%d", &temp);
        a[temp] = 0;
    }
    for (int i = 1; i < 31; i++)
    {
        if (a[i])
            printf("%d\n", i);
    }
}
