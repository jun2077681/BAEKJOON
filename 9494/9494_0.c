#include <stdio.h>
#include <math.h>

int main(void)
{
    int n = -1;
    int ans = 0;
    int temp;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        scanf("%d", &temp);
        ans = 0;
        char sen[101];
        for (int k = 0; k < n; k++)
        {
            for (int i = 0; i < 101; i++)
            {
                sen[i] = getchar();
                if (sen[i] == '\n')
                    break;
            }
            for (int i = ans; i < 101; i++)
            {
                if (sen[i] == ' '||sen[i]=='\n')
                {
                    ans = i;
                    break;
                }
            }
        }
        printf("%d\n", ans + 1);
    }
}

