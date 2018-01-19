#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

long long int uqrd(long long int aa,long long int bb);

int main(void)
{
    int r, g;
    scanf("%d %d", &r, &g);
    int a = uqrd(r, g);
    for (int i = 1; i <= a; i++)
    {
        if (a%i == 0)
        {
            printf("%d %d %d\n", i, r / i, g / i);
        }
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
