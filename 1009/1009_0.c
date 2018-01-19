#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    int *a;
    int *b;

    a = (int*)malloc(sizeof(int)*T);
    b = (int*)malloc(sizeof(int)*T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        a[i] %= 10;
        if (a[i] == 0)
        {
            a[i] = 10;
        }
        if (b[i] != 0)
            b[i] = b[i] % 4 + 4;
    }

    for (int i = 0; i < T; i++)
    {
        int k = a[i];
        if (b[i] == 0)
        {
            printf("%d\n", 1);
            continue;
        }
        else if (k == 10)
        {
            printf("%d\n", k);
            continue;
        }
        for (int j = 1; j < b[i]; j++)
        {
            k *= a[i];
            k %= 10;
        }
        printf("%d\n", k);
    }
    free(a);
    free(b);
    
    return 0;
}
