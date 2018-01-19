#include <stdio.h>
#include <string.h>
#include <math.h>

int answer(int a)
{
    if (a == 1)
        return 1;
    else if (a == 2)
        return 2;
    else if (a == 3)
        return 4;
    else
        return answer(a - 1) + answer(a - 2) + answer(a - 3);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a;
        scanf("%d", &a);
        printf("%d\n", answer(a));
    }
}
