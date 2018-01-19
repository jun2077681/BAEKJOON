#include <stdio.h>

int main(void)
{
    int sc[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &sc[i]);

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        if (sc[i] > 40)
            sum += sc[i];
        else
            sum += 40;
    }

    printf("%d", sum / 5);
}

