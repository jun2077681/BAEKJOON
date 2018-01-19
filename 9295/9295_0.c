#include <stdio.h>
#include <math.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    
    for (int j = 0; j < T; j++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", j+1,a + b);
    }
}
