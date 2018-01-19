#include <stdio.h>
#include <math.h>

int main()
{
    int score[8];
    int numb[5];
    int ans = 0;
    for (int i = 0; i < 8; i++)
        scanf("%d", &score[i]);

    for (int j = 0; j < 5; j++)
    {
        int big = 0;
        int num;
        for (int i = 0; i < 8; i++)
        {
            if (big <= score[i])
            {
                big = score[i];
                num = i;
            }
        }
        ans += big;
        score[num] = 0;
        numb[j] = num;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            int temp;
            if (numb[i] > numb[j])
            {
                temp = numb[i];
                numb[i] = numb[j];
                numb[j] = temp;
            }
        }
    }
    printf("%d\n", ans);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numb[i]+1);
    }
}
