#include <stdio.h>

int main(void)
{
    int T;
    int n[7];
    int sum, min;

    scanf("%d", &T);

    for (int i = 0; i<T; i++)
    {
        sum = 0;
        min = 200;
        scanf("%d %d %d %d %d %d %d", &n[1], &n[2], &n[3], &n[4], &n[5], &n[6], &n[0]);

        for (int j = 0; j<7; j++)
        {
            if (n[j] % 2 == 0)
            {
                sum += n[j];
                if (n[j]<min)
                    min = n[j];
            }
        }

        printf("%d %d\n", sum, min);
    }
}
