#include <stdio.h>
#include <math.h>

int main(void)
{
    int T;
    int n;

    scanf("%d", &T);
    int check[20];


    for (int i = 0; i < T; i++)
    {
        for (int i = 0; i < 20; i++)
            check[i] = 0;
        scanf("%d", &n);
        for (int j = 20; j >= 0; j--)
        {
            if (n >= pow(2, j))
            {
                check[j] = 1;
                n -= pow(2, j);
            }
        }

        for (int j = 0; j < 20; j++)
        {
            if (check[j])
                printf("%d ", j);
        }
        printf("\n");
    }
}
