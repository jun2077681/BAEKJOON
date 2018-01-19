#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    char on[3][7];
    scanf("%s %s %s", &on[0], &on[1], &on[2]);

    int one[3];

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(on[i], "black") == 0)
            one[i] = 0;
        else if (strcmp(on[i], "brown") == 0)
            one[i] = 1;
        else if (strcmp(on[i], "red") == 0)
            one[i] = 2;
        else if (strcmp(on[i], "orange") == 0)
            one[i] = 3;
        else if (strcmp(on[i], "yellow") == 0)
            one[i] = 4;
        else if (strcmp(on[i], "green") == 0)
            one[i] = 5;
        else if (strcmp(on[i], "blue") == 0)
            one[i] = 6;
        else if (strcmp(on[i], "violet") == 0)
            one[i] = 7;
        else if (strcmp(on[i], "grey") == 0)
            one[i] = 8;
        else if (strcmp(on[i], "white") == 0)
            one[i] = 9;
        else
            return 0;
    }

    long long int a = one[0] * 10 + one[1];
    long long int b = pow(10, one[2]);
    long long int c = a*b;
    printf("%llu", c);
}
