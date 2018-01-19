#include <stdio.h>
#include <math.h>

void bitt(int a);
void bittt(int a);

int main(void)
{
    int temp;

    temp = getchar() - 48;
    bittt(temp);
    for (int i = 1; ; i++)
    {
        temp = getchar() - 48;
        if (temp != -38)
            bitt(temp);
        else
            break;
    }
        
    return 0;

}

void bitt(int a)
{
    if (a >= 4)
    {
        printf("1");
        a -= 4;
    }
    else
        printf("0");
    if (a >= 2)
    {
        printf("1");
        a -= 2;
    }
    else
        printf("0");
    if (a >= 1)
    {
        printf("1");
    }
    else
        printf("0");
}

void bittt(int a)
{
    switch (a)
    {
    case 0:
        printf("0");
        break;
    case 1:
        printf("1");
        break;
    case 2:
        printf("10");
        break;
    case 3:
        printf("11");
        break;
    case 4:
        printf("100");
        break;
    case 5:
        printf("101");
        break;
    case 6:
        printf("110");
        break;
    case 7:
        printf("111");
        break;
    default:
        break;
    }
}
