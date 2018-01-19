#include <stdio.h>

int main(void)
{
    int a;
    char bo[50];
    int len = 0;
    for (int i = 0; bo[i-1] != '\n'; i++)
    {
        scanf("%1c", &bo[i]);
        if (i==0||bo[i] != bo[i - 1])
            len += 10;
        else
            len += 5;
    }
    printf("%d", len-10);
}
