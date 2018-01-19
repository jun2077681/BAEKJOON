#include <stdio.h>
#include <math.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    
    for (int j = 0; j < T; j++)
    {
        int o = getchar();
        int one = 0;
        int two;
        for (int i = 2; i >= 0; i--)
        {
            int temp = getchar();
            int po = pow(26, i);
            one = one + (temp - 65)*po;
        }
        getchar();
        scanf("%d", &two);
        if (abs(one - two) <= 100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
}
