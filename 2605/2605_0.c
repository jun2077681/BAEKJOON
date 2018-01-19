#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int *a;
    a = (int*)malloc(sizeof(int)*(N + 1));

    int *b;
    b = (int*)malloc(sizeof(int)*(N + 1));

    for (int i = 1; i <= N; i++)
        scanf("%d", &b[i]);

    a[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        int temp = b[i];
        for (int j =i-1;b[i]>0;j--)
        {
            a[j + 1] = a[j];
            b[i]--;
        }
        a[i - temp] = i;
    }

    for (int i = 1; i <= N; i++)
        printf("%d ", a[i]);
}
