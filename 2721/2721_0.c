#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
    int N;
    int arr[302];
    arr[1] = 1;
    for (int i = 2; i < 302; i++)
    {
        arr[i] = arr[i - 1] + i;
    }
    int W_n[301];
    W_n[1] = 3;
    for (int i = 2; i < 301; i++)
    {
        W_n[i] = W_n[i - 1] + i*arr[i + 1];
    }

    int T;
    scanf("%d", &T);
    while (T--)
    {
        int temp;
        scanf("%d", &temp);
        printf("%d\n", W_n[temp]);
    }
}
