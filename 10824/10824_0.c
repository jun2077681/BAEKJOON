#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

long long int plus(int a, int b);
int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%lld", plus(a, b)+plus(c, d));
}
long long int plus(int a, int b)
{
    int temp = b;
    int count = 0;
    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    long long int k = pow(10, count);
    return b + a*k;
}
