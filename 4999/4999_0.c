#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[1001], b[1001];
    scanf("%s %s", a, b);
    int alen = strlen(a);
    int blen = strlen(b);

    if (alen >= blen)
        printf("go");
    else
        printf("no");
}
