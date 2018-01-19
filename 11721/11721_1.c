#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        char a;
        if (scanf("%c", &a) == EOF)break;
        printf("%c", a);
        if (i % 10 == 0)
        {
            printf("\n");
        }
    }
}

