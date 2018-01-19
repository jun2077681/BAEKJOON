#include <stdio.h>
#include <math.h>

int main()
{
    char sen[1001];
    for (int i = 0; i < 1001; i++)
    {
        sen[i] = getchar();
        if (sen[i] == '\n')
            break;
        if (sen[i] >= 'D')
            printf("%c", sen[i] - 3);
        else
            printf("%c", sen[i] + 23);
    }
}
