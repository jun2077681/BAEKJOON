#include <stdio.h>
#include <string.h>

int main(void)
{
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    int min = a;
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    if (min > d)
        min = d;

    int min2 = e;
    if (min2 > f)
        min2 = f;
    printf("%d", a + b + c + d + e + f - min - min2);
}
