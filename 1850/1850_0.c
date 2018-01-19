#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int uqrd(long long int aa, long long int bb);

int main(void)
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int c = uqrd(a, b);
    while (c > 0)
    {
        printf("1");
        c--;
    }
}

long long int uqrd(long long int aa, long long int bb)
{
    long long int a, b;
    if (aa >= bb)
    {
        a = aa;
        b = bb;
    }
    else
    {
        a = bb;
        b = aa;
    }
    long long int q = a / b;
    long long int r;
    if (a / b == (double)a / b)
    {
        return b;
    }
    else
        r = a - b*q;

    if (b / r == (double)b / r)
    {
        return r;
    }
    else if (r / b == (double)r / b)
    {
        return b;
    }
    else
    {
        uqrd(b, r);
    }
}
