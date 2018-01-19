#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int *a = (int*)malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int i, j, tmp;
    for (i = 1; i < n; i++)
    {
        tmp = a[i];
        for (j = i - 1; j >= 0 && a[j] > tmp; j--)
            a[j + 1] = a[j];

        a[j + 1] = tmp;
    }

    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}
