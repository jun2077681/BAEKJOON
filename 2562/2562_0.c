#include <stdio.h>

int main(void)
{
    int a[9];
    for (int i = 0; i < 9; i++)
        scanf("%d", &a[i]);

    int answer = 0;
    int num = 0;

    for (int i = 0; i < 9; i++)
    {
        if (answer < a[i])
        {
            answer = a[i];
            num = i;
        }
    }

    printf("%d\n%d", answer, num+1);
}

