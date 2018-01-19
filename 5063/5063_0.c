#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b,c;
        scanf("%d %d %d", &a, &b,&c);
        int k = b - c;
        if (k > a)
            printf("advertise\n");
        else if (k == a)
            printf("does not matter\n");
        else
            printf("do not advertise\n");
    }
}
