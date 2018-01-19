#include <stdio.h>
int main(void)
{
    int a, b;
    int date = 0;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a-1; i++)
    {
        date += 30;
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            date += 1;
        }
        if (i == 2)
        {
            date -= 2;
        }
    }
    date += (b-1);
    switch (date % 7)
    {
    case 0:
        printf("MON");
        break;
    case 1:
        printf("TUE");
        break;
    case 2:
        printf("WED");
        break;
    case 3:
        printf("THU");
        break;
    case 4:
        printf("FRI");
        break;
    case 5:
        printf("SAT");
        break;
    case 6:
        printf("SUN");
        break;
    default:
        break;
    }

    return 0;
}
