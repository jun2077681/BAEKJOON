#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    char temp;
    while (1)
    {
        temp = getchar();
        if (temp == EOF)break;
        printf("%c", temp);
    }
}
