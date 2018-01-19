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
    if (t % 10 != 0)
    {
        printf("-1");
        exit(0);
    }
    int five = 0, one = 0, ten = 0;
    while (t - 300 >= 0)
    {
        t -= 300;
        five++;
    }
    while (t - 60 >= 0)
    {
        t -= 60;
        one++;
    }
    ten = t / 10;
    printf("%d %d %d", five, one, ten);
}
