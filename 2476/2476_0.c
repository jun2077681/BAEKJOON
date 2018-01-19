#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    int big = 0;
    int dis[3];
    int cash;
    int bigbig = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &dis[j]);

        if ((dis[0] == dis[1]) && (dis[1] == dis[2]))
        {
            cash = 10000 + 1000 * dis[0];
        }
        else if (dis[0] == dis[1])
        {
            cash = 1000 + 100 * dis[0];
        }
        else if (dis[1] == dis[2])
        {
            cash = 1000 + 100 * dis[1];
        }
        else if (dis[2] == dis[0])
        {
            cash = 1000 + 100 * dis[2];
        }
        else
        {
            bigbig = dis[0];
            if (dis[1] > bigbig)
                bigbig = dis[1];
            if (dis[2] > bigbig)
                bigbig = dis[2];

            cash = 100 * bigbig;
        }

        if (big < cash)
            big = cash;
    }
    printf("%d", big);
}
