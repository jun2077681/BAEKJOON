#include <stdio.h>
#include <math.h>

int main(void)
{
    char k;
    for (int i = 0;; i++)
    {
        scanf("%1c", &k);
        if (k == '\n')
            break;
        if (k >= 'a'&&k <= 'z')
            printf("%c", k - 32);
        else
            printf("%c", k + 32);
    }
}
