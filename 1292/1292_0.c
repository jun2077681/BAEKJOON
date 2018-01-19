#include <stdio.h>

int main(void)
{
    int num[1001];
    int n = 1;

    for (int i = 1; i < 1000;)
    {
        for (int j = n; j > 0; j--)
        {
            if (i == 1001)
                break;
            num[i] = n;
            i++;
        }
        n++;
    }

    int a, b;
    scanf("%d %d", &a, &b);
    int answer = 0;
    for (int i = a; i <= b; i++)
    {
        answer += num[i];
    }

    printf("%d", answer);
    return 0;
}

