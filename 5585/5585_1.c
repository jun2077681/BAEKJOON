#include <stdio.h>
#include <string.h>

int main(void)
{
    int money;
    int count = 0;
    scanf("%d", &money);
    money = 1000 - money;
    while(money - 500 >= 0)
    {
        money -= 500;
        count++;
    }
    while (money - 100 >= 0)
    {
        money -= 100;
        count++;
    }
    while (money - 50 >= 0)
    {
        money -= 50;
        count++;
    }
    while (money - 10 >= 0)
    {
        money -= 10;
        count++;
    }
    while (money - 5 >= 0)
    {
        money -= 5;
        count++;
    }
    while (money - 1 >= 0)
    {
        money -= 1;
        count++;
    }
    printf("%d", count);
}

