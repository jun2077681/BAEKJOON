#include <stdio.h>
int main()
{
    char a[4];
    int T;
    int temp;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%s", a);
        printf("%d\n", a[0] + a[2] - 96);
    }
}
