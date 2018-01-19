#include <stdio.h>

int main()
{
    int T,N;
    int pig[6];
    long long int sum, date;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        sum = 0;
        date = 1;
        scanf("%d", &N);
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &pig[j]);
            sum += pig[j];
        }
        while (sum <= N)
        {
            sum *= 4;
            date++;
        }
        printf("%lld\n", date);
    }
}
