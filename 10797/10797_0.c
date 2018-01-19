#include <stdio.h>

int main(void)
{
    int date;
    int temp;
    int count = 0;
    scanf("%d", &date);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &temp);
        if (temp == date)
            count++;
    }
    printf("%d", count);
}
