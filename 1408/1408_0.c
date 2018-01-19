#include <stdio.h>
#include <string.h>

void secondtime(int a)
{
    int temp = a;
    int time = 0, minute = 0, second = 0;
    while (temp - 3600 >= 0)
    {
        temp -= 3600;
        time++;
    }
    while (temp - 60 >= 0)
    {
        temp -= 60;
        minute++;
    }
    second = temp;
    printf("%02d:%02d:%02d", time, minute, second);
}
int main()
{
    int time1, time2, minute1, minute2, second1, second2;
    scanf("%d:%d:%d", &time1, &minute1, &second1);
    scanf("%d:%d:%d", &time2, &minute2, &second2);
    int one = time1 * 3600 + minute1 * 60 + second1;
    int two = time2 * 3600 + minute2 * 60 + second2;

    if (one < two)
    {
        secondtime(two - one);
    }
    else
    {
        two += 24 * 3600;
        secondtime(two - one);
    }
}
