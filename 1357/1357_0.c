#include <stdio.h>
#include <string.h>

int Rev(int a);
int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int rx, ry;
    rx = Rev(x);
    ry = Rev(y);
    int ans = Rev(rx + ry);
    printf("%d", ans);
}
int Rev(int a)
{
    int temp = a;
    int k = 0;
    while (temp > 0)
    {
        k *= 10;
        k = k + temp % 10;
        temp /= 10;
    }
    return k;
}
