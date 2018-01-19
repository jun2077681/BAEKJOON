#include <stdio.h>
#include <math.h>

int main(void)
{
    int n[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }

    int avg = (n[0] + n[1] + n[2] + n[3] + n[4]) / 5;
    int temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (n[i] < n[j])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }

    printf("%d\n%d", avg, n[2]);
}
