#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double logXXX(double a)
{
    return log(a) / log(10);
}
int main(void)
{
    char S[101];
    int sum = 0;
    int k=0;
    scanf("%s", S);
    int l = strlen(S);
    while (1)
    {
        if (k > l)
            break;
        int a = atoi(S+k);
        sum += a;
        k += (int)logXXX((double)a) + 2;
        if (a == 1 || a == 10 || a == 100 || a == 1000 || a == 10000 || a == 100000 || a == 1000000)
            k++;
    }
    printf("%d", sum);
    
}
