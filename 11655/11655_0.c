#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[101];
    for (int i = 0;; i++)
    {
        a[i] = getchar();
        if (a[i] == '\n')
            break;
        if (a[i] >= 'a'&&a[i] <= 'm')
            a[i] += 13;
        else if (a[i] >= 'n'&&a[i] <= 'z')
            a[i] -= 13;
        else if (a[i] >= 'A'&&a[i] <= 'M')
            a[i] += 13;
        else if (a[i] >= 'N'&&a[i] <= 'Z')
            a[i] -= 13;
    }
    for (int i = 0;; i++)
    {
        if (a[i] != '\n')
            printf("%c", a[i]);
        else
            break;
    }
}
