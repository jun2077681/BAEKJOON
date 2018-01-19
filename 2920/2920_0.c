#include <stdio.h>
int main()
{
    int a[9];
    int as = 0, de = 0;
    for (int i = 1; i < 9; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == i)
            as++;
        if (a[i] == 9 - i)
            de++;
    }
    if (as == 8)
        printf("ascending");
    else if (de == 8)
        printf("descending");
    else
        printf("mixed");
}
