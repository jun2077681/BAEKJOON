#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int n;
int map[101][101], visit[101];

void DFS(int v)
{
    int i;
    visit[v] = 1;
    for (i = 1; i <= n; i++)
    {
        if (map[v][i] == 1 && !visit[i])
        {
            DFS(i);
        }
    }
}
int main(void)
{
    int start = 1;
    int v1, v2;
    int k;
    int count = 0;
    scanf("%d %d", &n,&k);
    while (k--)
    {
        scanf("%d %d", &v1, &v2);
        map[v1][v2] = map[v2][v1] = 1;
    }

    DFS(start);

    for (int i = 1; i <= n; i++)
    {
        if (visit[i] == 1)
            count++;
    }
    printf("%d", count - 1);
}
