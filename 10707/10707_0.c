#include <stdio.h>
#include <math.h>

int main(void)
{
    int A, B, C, D, P;
    int x, y = 0;
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &P);

    x = A*P;
    if (P <= C)
    {
        y = B;
    }
    else
    {
        y = B + (P - C)*D;
    }
    if (x > y)
        printf("%d", y);
    else
        printf("%d", x);
}

