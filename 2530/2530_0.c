#include <stdio.h>
#include <math.h>

int main()
{
    int time, minute, second;
    int D;
    scanf("%d %d %d", &time, &minute, &second);
    scanf("%d", &D);

    int timep = D / 3600;
    int minutep = (D - timep*3600) / 60;
    int secondp = D % 60;

    second += secondp;
    if (second >= 60)
    {
        second -= 60;
        minute++;
    }
    minute += minutep;
    if (minute >= 60)
    {
        minute -= 60;
        time++;
    }
    time += timep;
    while (time >= 24)
    {
        time -= 24;
    }
    printf("%d %d %d", time, minute, second);
}
