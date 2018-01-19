#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n, m;
    int answer[2016];
    int num[2016];
    int count = 0;
    int count2 = 0;
    int count3 = 0;
    scanf("%d %d", &n, &m);
    int k = n;

    while (!((k == 0) || (count == 2016)))
    {
        num[count] = k % 10;
        k /= 10;
        count++;
    }

    for (int j = count-1; j >= 0; j--)
    {
        printf("%d", num[j]);
        if (j == 0)
        {
            j = count;
            count3++;
        }
        count2++;
        if (count3 == n || count2 == m)
        {
            break;
        }
    }

    return 0;
}
