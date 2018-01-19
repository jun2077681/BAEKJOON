#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    for (int aaa = 0; aaa < T; aaa++)
    {
        int N;
        scanf("%d", &N);
        int sum = 0;
        double GPA = 0;
        for (int bbb = 0; bbb < N; bbb++)
        {
            int a;
            double b;
            scanf("%d %lf", &a, &b);
            sum += a;
            GPA = GPA + (double)a*b;
        }
        GPA /= sum;
        printf("%d %.1lf\n", sum, GPA);
    }
}
