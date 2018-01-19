#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    for (int i = 0; i < c; i++)
    {
        a = a^b;
    }
    printf("%d", a);
}

