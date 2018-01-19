#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n, m;
    char **a;
    char **b;
    scanf("%d %d", &n, &m);

    a = (char**)malloc(sizeof(char*)*n);
    for (int i = 0; i < n; i++)
    {
        a[i] = (char*)malloc(sizeof(char)*(m));
    }

    b = (char**)malloc(sizeof(char*)*n);
    for (int i = 0; i < n; i++)
    {
        b[i] = (char*)malloc(sizeof(char)*m);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = NULL;
            scanf("%c", &a[i][j]);
            if (a[i][j] == '\n')
                j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[i][j] = NULL;
            b[i][j] = a[i][m - j - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%c", b[i][j]);
        }
        if (i != n - 1)
            printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        free(a[i]);
        free(b[i]);
    }

    free(a);
    free(b);

    return 0;
}
