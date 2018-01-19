#include <stdio.h>

int main(void)
{
    int V;
    int t;
    scanf("%d", &V);
    scanf("%d", &t);
    char temp;
    int a = 0, b = 0;
    for (int i = 0; i < V; i++)
    {
        temp = getchar();
        if (temp == 'A')
            a++;
        else if (temp == 'B')
            b++;
    }
    if (a > b)
        printf("A");
    else if (a < b)
        printf("B");
    else if (a == b)
        printf("Tie");
}
