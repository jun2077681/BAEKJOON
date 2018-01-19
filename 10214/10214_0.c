#include <stdio.h>

int main(void)
{
    int T;
    int a=0, b=0;
    int sa = 0, sb = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d %d", &a, &b);
            sa += a;
            sb += b;
        }
        if (sa > sb)
        {
            printf("Yonsei\n");
        }
        else if (sa < sb)
            printf("Korea\n");
        else
            printf("Draw\n");
    }
}
