#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int o=0, x=0;
    for (int k = 0; k < N; k++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp)
            o++;
        else
            x++;
    }
    if (o > x)
        printf("Junhee is cute!");
    else
        printf("Junhee is not cute!");
}
