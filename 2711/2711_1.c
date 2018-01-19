#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int ota;
        char sen[81];
        scanf("%d %s", &ota, sen);
        int k = strlen(sen);
        for (int i = 0; i < k; i++)
        {
            if (i != ota - 1)
                printf("%c", sen[i]);
        }
        printf("\n");
    }
}

