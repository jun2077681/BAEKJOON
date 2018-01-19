#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        for (int j = T - i; j > 0; j--)
        {
            printf("  ");
        }
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = T - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        for (int j = T - i; j > 0; j--)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
