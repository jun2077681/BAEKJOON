#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    char temp;
    while ((temp = getchar()) != EOF)
    {
        printf("%c", temp);
    }
}
