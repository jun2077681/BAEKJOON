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
    int temp;
    int na[42];
    for (int i = 0; i < 42; i++)
        na[i] = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &temp);
        na[temp % 42] = 1;
    }
    int count = 0;
    for (int i = 0; i < 42; i++)
    {
        if (na[i])
            count++;
    }
    printf("%d", count);
}
