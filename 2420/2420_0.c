#include <stdio.h>
#include <string.h>

int main(void)
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int c = a - b;
    if (c < 0)
        c *= -1;
    printf("%lld", c);
}
