#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int big=0, bigx, bigy;
    int temp;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &temp);
            if (temp > big)
            {
                big = temp;
                bigx = i;
                bigy = j;
            }
        }
    }
    printf("%d\n%d %d", big, bigx+1, bigy+1);
}
