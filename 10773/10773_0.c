#include <stdio.h>
#include <string.h>

int main(void)
{
    int k;
    scanf("%d", &k);
    int sum = 0;

    int *a;
    a = (int*)malloc(sizeof(int)*k);

    for (int i = 0; i < k; i++)
        a[i] = -1;

    int j = 0;
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &a[j]);
        if (a[j] == 0)
        {
            a[j] = -1;
            a[j - 1] = -1;
            j -= 2;
        }
        j++;
    }

    for (int i = 0; i < k; i++)
    {
        if (a[i] != -1)
        {
            sum += a[i];
        }
    }
    printf("%d", sum);


}
