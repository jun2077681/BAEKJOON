#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    int sum = 0;
    int buf;
    scanf("%d", &T);
    scanf("%d", &buf);
    for (int i = 0; i < T; i++)
    {
        sum = 0;
        int alp[26];
        for (int j = 0; j < 26; j++)
            alp[j] = 1;
        char a;
        while (1)
        {
            a = getchar();
            if (a == '\n')
                break;
            alp[a - 65] = 0;
        }
        for (int j = 0; j < 26; j++)
        {
            if (alp[j])
            {
                sum = sum + j + 65;
            }
        }
        printf("%d\n", sum);
    }
}
