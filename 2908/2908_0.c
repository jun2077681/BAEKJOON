#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int k;
    if (a % 10 > b % 10)
    {
        k = a;
    }
    else if (a % 10 < b % 10)
    {
        k = b;
    }
    else
    {
        if (a / 10 % 10 > b / 10 % 10) {
            k = a;
        }
        else if (a / 10 % 10 < b / 10 % 10) {
            k = b;
        }
        else
        {
            if (a / 100 > b / 100) {
                k = a;
            }
            else {
                k = b;
            }
        }
    }
    printf("%d%d%d", k % 10, k / 10 % 10, k / 100);
}
