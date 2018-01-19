#include <stdio.h>
#pragma warning(disable:4996)

int uqrd(int aa, int bb);

int main(void)
{
    int a, b,T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a*b / uqrd(a, b));
    }
}

int uqrd(int aa, int bb)
{
    int a, b;
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
    int q = a / b;
    int r;
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
