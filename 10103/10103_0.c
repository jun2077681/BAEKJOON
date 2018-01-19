#include <stdio.h>

int main(void)
{
    int T;
    int a, b;
    int sa = 100, sb = 100;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            sb -= a;
        }
        else if (a < b)
        {
            sa -= b;
        }
    }
    printf("%d\n%d", sa, sb);
}
