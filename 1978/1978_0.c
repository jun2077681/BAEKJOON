#include <stdio.h>

int main(void)
{
    int N;
    int p[1001];
    int count = 0;
    p[0] = 0;
    p[1] = 0;
    for (int i = 2; i < 1001; i++)
    {
        p[i] = 1;
    }
    for (int i = 2; i <= 1000; i++)
    {
        for (int j = 2; j*i <= 1000; j++)
        {
            if (p[j] == 1)
                p[j*i] = 0;
        }
    }
    scanf("%d", &N);
    int num;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if (p[num])
            count++;
    }

    printf("%d", count);
}
