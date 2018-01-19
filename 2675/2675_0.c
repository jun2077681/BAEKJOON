#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    for (int o = 0; o < T; o++)
    {
        int r;
        char s[21];
        scanf("%d %s", &r,s);
        int a = strlen(s);
        for (int j = 0; j < a; j++)
        {
            for (int i = 0; i < r; i++)
            {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
}
