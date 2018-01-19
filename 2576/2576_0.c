#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[7];
    int small = 100;
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2)
        {
            sum += a[i];
            if (small > a[i])
                small = a[i];
        }
    }
    if (sum)
        printf("%d\n%d", sum, small);
    else
        printf("-1");
}
