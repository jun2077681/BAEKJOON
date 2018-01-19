#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int aa = 0; aa < n; aa++)
    {
        char a[21], b[21];
        scanf("%s %s", a, b);
        int k = strlen(a);
        printf("Distances:");
        for (int i = 0; i < k; i++)
        {
            int l = b[i] - a[i];
            if (l < 0)
                l += 26;
            printf(" %d", l);
        }
        printf("\n");
    }
}
