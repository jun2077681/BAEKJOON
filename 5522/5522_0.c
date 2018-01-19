#include <stdio.h>
#include <math.h>

int main(void)
{
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        int a;
        scanf("%d", &a);
        ans += a;
    }
    printf("%d", ans);
}

