#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);
    int kg5 = N / 5;
    int check = 0;
    while (kg5 >= 0)
    {
        if ((N - kg5 * 5) % 3 == 0)
        {
            printf("%d", kg5 + (N - kg5 * 5) / 3);
            check = 1;
            break;
        }
        kg5--;
    }
    if (check == 0)
        printf("-1");
}
