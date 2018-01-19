#include <stdio.h>

int main(void)
{
    char a[100000];
    while (1)
    {
        int i;
        for (i = 0; i < 100000; i++)
        {
            a[i] = getchar();
            if (a[i] == '\n')
                break;
        }
        if (a[0] == 'E'&&a[1] == 'N'&&a[2] == 'D')
            break;
        for (i = i-1; i >= 0; i--)
        {
            printf("%c", a[i]);
        }
        printf("\n");
    }
}
