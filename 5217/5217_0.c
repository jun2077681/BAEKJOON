#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int aaa = 0; aaa < T; aaa++)
    {
        int a;
        scanf("%d", &a);
        printf("Pairs for %d: ", a);
        for (int i = 1;; i++)
        {
            if (a - i > i)
            {
                printf("%d %d", i, a - i);
            }
            else
                break;
            if (a - (i + 1) > i + 1)
            {
                printf(", ");
            }
        }
        printf("\n");
    }
}
