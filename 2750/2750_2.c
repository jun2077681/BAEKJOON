#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int *a;
    a = (int*)malloc(sizeof(int)*N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
        printf("%d\n", a[i]);
}
