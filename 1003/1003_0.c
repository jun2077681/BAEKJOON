#include <stdio.h>
#include <stdlib.h>

int zerocount = 0;
int onecount = 0;
int fibonacci(int n);

int main(void)
{
    int N, a;
    int *ans;
    scanf("%d", &N);
    ans = (int*)malloc(sizeof(int*)*N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ans[i]);
    }
    for (int i = 0; i < N; i++)
    {
        int k=fibonacci(ans[i]);
        printf("%d %d\n", zerocount, onecount);
        zerocount = 0;
        onecount = 0;
    }

    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        zerocount++;
        return 0;
    }
    else if (n == 1) {
        onecount++;
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
