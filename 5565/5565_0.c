#include <stdio.h>

int main(void)
{
    int cost;
    int temp;
    scanf("%d", &cost);
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &temp);
        cost -= temp;
    }
    printf("%d", cost);
}
