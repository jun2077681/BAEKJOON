#include <stdio.h>
int uqrd(int aa, int bb);

int main(void) {
    int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
    scanf("%d %d", &a1, &a2);
    scanf("%d %d", &b1, &b2);
    int c1 = 0, c2 = 0;
    c2 = a2*b2;
    c1 = a1*b2 + b1*a2;
    int k = uqrd(c1, c2);
    printf("%d %d", c1 / k, c2 / k);
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
