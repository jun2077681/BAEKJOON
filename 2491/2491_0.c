#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *a;
    a = (int*)malloc(sizeof(int)*n);
    int nn = n;
    while (nn--)
        scanf("%d", &a[nn]);

    int big = 0;
    int count = 1;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] <= a[i + 1])
            count++;
        else
        {
            if (count > big)
                big = count;
            count = 1;
        }
    }
    if (count > big)
        big = count;
    count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] >= a[i + 1])
            count++;
        else
        {
            if (count > big)
                big = count;
            count = 1;
        }
    }
    if (count > big)
        big = count;
    printf("%d", big);
}
