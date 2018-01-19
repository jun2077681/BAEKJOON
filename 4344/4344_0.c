#include <stdio.h>

int main(void)
{
    int c;
    scanf("%d", &c);
    while (c--)
    {
        int n = 0;
        int sum = 0;
        scanf("%d", &n);
        int *a = (int*)malloc(sizeof(int)*n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        double av = sum / n;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (av < a[i])
            {
                sum++;
            }
        }
        printf("%.3f", 100*((double)sum / (double)n));
        printf("%%\n");
        free(a);
    }

    return 0;
}
