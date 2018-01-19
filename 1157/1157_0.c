#include <stdio.h>
#include <math.h>

int main(void)
{
    int a[26];
    char k;
    int big = 0;
    int b = 0;
    int count = 0;
    for (int i = 0; i < 26; i++)
        a[i] = 0;
    for (int i = 0;; i++)
    {
        if(scanf("%1c", &k) == -1) break;
        if (k >= 'a')
            k -= 32;
        a[k - 65]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > big)
        {
            count = 0;
            big = a[i];
            b = i;
        }
        else if (a[i] == big)
            count++;
    }
    if (count >= 1)
        printf("?");
    else
        printf("%c", b + 65);
}

