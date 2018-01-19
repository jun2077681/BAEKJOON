#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void gold(int prime[], int n)
{
    int sum;
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
            continue;
        if (prime[n - i] == 0)
            continue;
        printf("%d %d", i, n - i);
        break;
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 8)
    {
        printf("-1");
        exit(0);
    }
    
    int *prime;
    prime = (int*)malloc(sizeof(int)*(n + 1));
    prime[0] = 0;
    prime[1] = 0;

    for (int i = 2; i <= n; i++)
        prime[i] = 1;
    for (int i = 2; (prime[i] == 0) || (i <= n); i++)
        for (int j = 2; j*i <= n; j++)
            prime[j*i] = 0;

    if (n % 2 == 0)
    {
        printf("2 2 ");
        gold(prime,n - 4);
    }
    else
    {
        printf("2 3 ");
        gold(prime, n - 5);
    }
}
