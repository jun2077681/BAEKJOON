#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int a[5];
        for (int j = 0; j < 5; j++)
            scanf("%d", &a[j]);

        for (int j = 0; j < 5; j++)
        {
            for (int k = j; k < 5; k++)
            {
                if (a[j] > a[k])
                {
                    int temp;
                    temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }
        if (a[3] - a[1] >= 4)
        {
            printf("KIN\n");
        }
        else
            printf("%d\n", a[1] + a[2] + a[3]);
    }
}
