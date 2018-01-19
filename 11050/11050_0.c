#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int fac10(int a)
{
    switch (a)
    {
    case 0:
        return 1;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 6;
    case 4:
        return 24;
    case 5:
        return 120;
    case 6:
        return 720;
    case 7:
        return 5040;
    case 8:
        return 40320;
    case 9:
        return 362880;
    case 10:
        return 3628800;

    default:
        break;
    }
}
int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a = fac10(n) / (fac10(k)*fac10(n - k));
    printf("%d", a);


}
