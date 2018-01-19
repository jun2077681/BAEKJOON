#include <stdio.h>
#pragma warning (disable:4996)

struct number {
    int num;
    int count;
};

    int main(void)
{
    struct number num[10];
    int sum = 0;
    int temp;
    int count1 = 0;
    int answer = 0;
    for (int i = 0; i<10; i++)
    {
        scanf("%d", &num[i].num);
        sum += num[i].num;
        num[i].count = 0;
    }
    int av = sum / 10;

    for (int i = 0; i<10; i++)
    {
        temp = num[i].num;
        for (int j = 0; j < 10; j++)
        {
            if (num[j].num == temp)
                num[i].count++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (count1 < num[i].count)
        {
            count1 = num[i].count;
            answer = num[i].num;
        }

    }

    printf("%d\n%d", av,answer);
}
