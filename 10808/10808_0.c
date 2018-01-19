#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100];
    scanf("%s", a);
    int ap[123];
    for (int i = 'a'; i <= 'z'; i++)
    {
        ap[i] = 0;
    }
    int k = strlen(a);
    for (int i = 0; i < k; i++)
    {
        ap[a[i]]++;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        printf("%d ", ap[i]);
    }
}
