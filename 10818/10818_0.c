#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int big = -1000000;
    int small = 1000000;
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp > big)
            big = temp;
        if (temp < small)
            small = temp;
    }
    printf("%d %d", small, big);
}
