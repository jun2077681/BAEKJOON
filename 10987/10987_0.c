#include <stdio.h>

int main(void)
{
    char temp[101];
    for (int i = 0; i < 101; i++)
        temp[i] = NULL;
    scanf("%s", temp);
    int count = 0;
    for (int i = 0; i < 101; i++)
    {
        if (temp[i] == 'a' || temp[i] == 'i' || temp[i] == 'e' || temp[i] == 'o' || temp[i] == 'u')
        {
            count++;
        }
    }
    printf("%d", count);
}
