#include <stdio.h>

int main(void)
{
    int a[9];
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    int c, b;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 9; j++)
        {
            if (sum - a[i] - a[j] == 100)
            {
                c = i;
                b = j;
            }
        }
    }

    int x[7];
    int k = 0;
    for (int i = 0; i < 9; i++)
    {
        if (i != c&&i != b)
        {
            x[k] = a[i];
            k++;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = i; j < 7; j++)
        {
            if (x[i] > x[j])
            {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for (int i = 0; i < 7; i++)
        printf("%d\n", x[i]);
}

