#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    for (int aaa = 0; aaa < T; aaa++)
    {
        char a[1000];
        scanf("%s", a);
        int k = strlen(a);
        printf("%c%c\n", a[0], a[k - 1]);
    }
}
