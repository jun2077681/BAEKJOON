#include <stdio.h>
#pragma warning(disable:4996)

int n;
int map1[1001][1001], visit1[1001];
int map2[1001][1001], visit2[1001];
int queue[1001];
int rear, front;
void DFS(int v)
{
    int i;

    visit1[v] = 1;
    for (i = 1; i <= n; i++)
    {
        if (map1[v][i] == 1 && !visit1[i])
        {
            printf("%d ", i);
            DFS(i);
        }
    }
}
void BFS(int v)
{
    int i;

    visit2[v] = 1;
    queue[rear++] = v;
    while (front < rear)
    {
        v = queue[front++];
        for (i = 1; i <= n; i++)
        {
            if (map2[v][i] == 1 && !visit2[i])
            {
                visit2[i] = 1;
                printf("%d ", i);
                queue[rear++] = i;
            }
        }
    }
}
int main(void)
{
    int M, V;
    int a, b;
    scanf("%d %d %d", &n, &M, &V);
    while (M--)
    {
        scanf("%d%d", &a, &b);
        map1[a][b] = 1;
        map2[a][b] = 1;
        map2[b][a] = 1;
        map1[b][a] = 1;
    }
    printf("%d ", V);
    DFS(V);
    printf("\n%d ",V);
    BFS(V);
    return 0;
}
