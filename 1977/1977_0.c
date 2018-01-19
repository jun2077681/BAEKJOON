#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void) {
    int m = 0, n = 0;
    int sum = 0;
    int min = 0, max = 0;
    scanf("%d %d", &m, &n);
    if ((int)sqrt(m)*(int)sqrt(m) == m)
    {
        min = sqrt(m);
    }
    else 
    {
        min = (int)sqrt(m) + 1;
    }

    max = (int)sqrt(n);

    if (max < min)
    {
        printf("-1");
        return 0;
    }
    

    for (int i = min; i <= max; i++) 
    {
        sum += i*i;
    }
    printf("%d\n%d", sum, min*min);
}
