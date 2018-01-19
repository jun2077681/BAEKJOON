#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        double a;
        scanf("%lf", &a);
        char b = 'a';
        while (b != '\n')
        {
            scanf("%c", &b);
            if (b == '@')
                a *= 3;
            if (b == '%')
                a += 5;
            if (b == '#')
                a -= 7;
        }
        printf("%.2lf\n", a);
    }
}
