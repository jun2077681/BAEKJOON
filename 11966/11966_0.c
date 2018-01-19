#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
    int N;
    scanf("%d", &N);
    int swit = 1;
    while (N)
    {
        if (N % 2 == 1&&N!=1)
        {
            swit = 0;
            break;
        }
        N /= 2;
    }
    printf("%d", swit);
}
