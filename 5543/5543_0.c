#include <stdio.h>

int main(void)
{
    int bug=10000;
    int temp;
    int be=10000;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &temp);
        if (temp < bug)
            bug = temp;
    }
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &temp);
        if (temp < be)
            be = temp;
    }
    printf("%d", bug + be - 50);
}
