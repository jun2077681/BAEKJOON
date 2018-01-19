#include <stdio.h>

int main(void)
{
    char temp[101];
    for (int i = 0; i < 101; i++)
        temp[i] = NULL;
    scanf("%s", temp);
    printf("%c", temp[0]);
    for (int i = 1; i < 101; i++)
    {
        if (temp[i] == '-')
            printf("%c", temp[i + 1]);
    }
}
