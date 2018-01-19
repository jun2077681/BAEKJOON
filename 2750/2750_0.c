#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int *a = (int*)malloc(sizeof(int)*(n+1));
    int k = n+1;

    for (int i = 1; i < n+1; i++)
    {
        scanf("%d", &a[i]);
    }
    while (k-1)
    {
        for (int i = 1; i < k; i++)
        {
            if (i == 1)
                continue;
            int temp = i;
            while (temp)
            {
                if (a[temp / 2] < a[temp]&&(int)(temp/2)!=0)
                {
                    swap(&a[temp / 2], &a[temp]);
                    temp /= 2;
                }
                else
                    break;
            }
        }
        k--;
        swap(&a[1], &a[k]);
    }

    for (int i = 1; i < n+1; i++)
        printf("%d\n", a[i]);

    
}
