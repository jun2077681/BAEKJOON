#include <stdio.h>

int main(void)
{
    int sum = 0;
    int big = 0;
    for (int i = 0; i < 10; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        sum -= a;
        sum += b;
        if (sum > big)
            big = sum;
    }
    printf("%d", big);
}
