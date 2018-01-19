#include <stdio.h>

int main(void)
{
    int acount = 0, bcount = 0;
    int a=0, b=0;
    char y;
    while (a != '\n')
    {
        a = getchar();
        acount++;
    }
    y = getchar();
    getchar();
    while (b != '\n')
    {
        b = getchar();
        bcount++;
    }

    acount--;
    bcount--;

    if (acount < bcount)
    {
        int temp = acount;
        acount = bcount;
        bcount = temp;
    }
    if (y == '*')
    {
        printf("1");
        while (acount-1 > 0)
        {
            printf("0");
            acount--;
        }
        while (bcount-1 > 0)
        {
            printf("0");
            bcount--;
        }
    }
    else if (y == '+')
    {
        
        if (acount != bcount)
        {
            printf("1");
            int k = acount - bcount - 1;
            while (k > 0)
            {
                printf("0");
                k--;
            }
            printf("1");
            while (bcount - 1 > 0)
            {
                printf("0");
                bcount--;
            }
        }
        else
        {
            printf("2");
            while (acount-1 > 0)
            {
                printf("0");
                acount--;
            }
        }
    }
}
