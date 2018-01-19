#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[4];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
        int k = a[0] + a[1] + a[2] + a[3];
        switch (k)
        {
        case 0:
            printf("D\n");
            break;
        case 1:
            printf("C\n");
            break;
        case 2:
            printf("B\n");
            break;
        case 3:
            printf("A\n");
            break;
        case 4:
            printf("E\n");
            break;
        default:
            break;
        }
    }
}
