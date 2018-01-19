#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int r, w, l;
    int i = 1;
    while (1)
    {
        scanf("%d", &r);
        if (r == 0)
            break;
        scanf("%d %d", &w, &l);

        if (4 * r*r >= w*w + l*l)
        {
            printf("Pizza %d fits on the table.\n", i);
        }
        else
        {
            printf("Pizza %d does not fit on the table.\n", i);
        }
        i++;

    }
}
