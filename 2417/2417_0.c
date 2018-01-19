#include <stdio.h>
#include <math.h>

int main(void)
{
    long long int n;
    scanf("%lld", &n);
    /*for (long long int i = 1;; i++)
    {
        if ((i*i >= n))
        {
            printf("%d", i);
            break;
        }
    }*/
    long long a = sqrt(n);
    if (a*a == n)
        printf("%lld", a);
    else
        printf("%lld", a + 1);
}
