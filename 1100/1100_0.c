#include <stdio.h>

int main(void)
{
    char ches[8][8];
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            scanf("%c", &ches[i][j]);
            if (ches[i][j] == '\n')
                j--;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i % 2 == j % 2)
            {
                if (ches[i][j] == 'F')
                    count++;
            }
        }
    }

    printf("%d", count);
}
