#include <stdio.h>

int main(void)
{
    int a, b;
    int answer = -1;
    int temp = 0;
    int i = 4;
    while (i != 0)
    {
        scanf("%d %d", &a, &b);
        temp -= a;
        temp += b;
        if (answer < temp)
            answer = temp;
        i--;
    }
    printf("%d", answer);
}

