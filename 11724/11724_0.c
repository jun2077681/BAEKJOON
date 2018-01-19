#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool **map;
bool *visit;
int n, m;
void DFS(int v) {

    int i;

    visit[v] = true;
    for (i = 1; i <= n; i++)
    {
        if (map[v][i] == true && !visit[i])
        {
            DFS(i);
        }
    }
}

int main(void)
{
    
    int a, b;
    int count = 0;
    scanf("%d %d", &n, &m);

    map = (bool**)malloc(sizeof(bool*)*(n + 1));
    visit = (bool*)calloc(n+1,sizeof(bool));
    for (int i = 1; i <= n; i++)
        map[i] = (bool*)calloc(n+1,sizeof(bool));

    while (m--)
    {
        scanf("%d %d", &a, &b);
        map[a][b] = map[b][a] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (visit[i] == false)
        {
            DFS(i);
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
