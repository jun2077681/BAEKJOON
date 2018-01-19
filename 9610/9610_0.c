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
    int n;
    scanf("%d", &n);
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;
    for (int aa = 0; aa < n; aa++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a*b > 0)
        {
            if (a > 0)
                q1++;
            else
                q3++;
        }
        else if (a*b == 0)
            axis++;
        else if (a*b < 0)
        {
            if (a > 0)
                q4++;
            else
                q2++;
        }
    }
    printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d", q1, q2, q3, q4, axis);
}
