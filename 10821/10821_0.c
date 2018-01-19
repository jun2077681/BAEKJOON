#include <stdio.h>
int main(void)
{
    char temp;
    int count = 0;
    while ((temp = getchar()) != EOF)
    {
        if (temp == ',')
            count++;
    }
    printf("%d", count + 1);
}
