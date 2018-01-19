#include <stdio.h>

int main(void)
{
    char a = getchar();
    int check = 1;
    int count = 0;
    while (a != 10)
    {
        if (a == 32)
            check = 1;

        if (check == 1 && a != 32)
        {
            count++;
            check = 0;
        }

        a = getchar();

    }
    printf("%d", count);
}
