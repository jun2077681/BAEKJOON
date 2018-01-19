#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    for (int o = 0; o < T; o++)
    {
        int a[10];
        for (int i = 0; i < 10; i++)
            scanf("%d", &a[i]);

        for (int i = 0; i < 10; i++)
        {
            for (int j = i; j < 10; j++)
            {
                if (a[i] < a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        printf("%d\n", a[2]);
    }
}
