#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int five[7];
    int six[7];
    for (int i = 0; i < 7; i++)
    {
        five[i] = 0;
        six[i] = 0;
    }
    int fcount = 0;
    int scount = 0;
    int big, small;
    big = a + b;
    small = a + b;
    while (a > 0)
    {
        if (a % 10 == 5)
        {
            five[fcount]++;
        }
        fcount++;
        if (a % 10 == 6)
        {
            six[scount]++;
        }
        scount++;
        a /= 10;
    }
    fcount = 0;
    scount = 0;
    while (b > 0)
    {
        if (b % 10 == 5)
        {
            five[fcount]++;
        }
        fcount++;
        if (b % 10 == 6)
        {
            six[scount]++;
        }
        scount++;
        b /= 10;
    }
    for (int i = 0; i < 7; i++)
    {
        while (five[i] > 0)
        {
            int po = pow(10, i);
            big = big + po;
            five[i]--;
        }
        while (six[i] > 0)
        {
            int po = pow(10, i);
            small = small - po;
            six[i]--;
        }

    }

    printf("%d %d", small, big);
}
