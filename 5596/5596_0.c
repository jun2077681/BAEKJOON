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
    int a, b, c, d;
    int s, t;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    s = a + b + c + d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    t = a + b + c + d;
    if (s > t)
    {
        printf("%d", s);
    }
    else
        printf("%d", t);
}
