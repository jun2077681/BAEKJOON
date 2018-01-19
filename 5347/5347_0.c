#include <stdio.h>
#pragma warning(disable:4996)

long long int uqrd(long long int aa, long long int bb);

int main(void)
{
    long long int a, b, T;
    scanf("%lld", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", a*b / uqrd(a, b));
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

