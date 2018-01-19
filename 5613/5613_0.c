#include <stdio.h>
#include <math.h>

int main()
{
    int a,c;
    int swi = 0;
    char b;
    while (1)
    {
        scanf("%d", &a);
        switch (swi)
        {
        case 1:
            a = a+c;
            break;
        case 2:
            a = c-a;
            break;
        case 3:
            a = c*a;
            break;
        case 4:
            a = c/a;
            break;
        default:
            break;
        }
        
        do {
            scanf("%c", &b);
        } while (b == '\n');
        if (b == '=')
        {
            printf("%d", a);
            break;
        }
        else if (b == '+')
            swi = 1;
        else if (b == '-')
            swi = 2;
        else if (b == '*')
            swi = 3;
        else if (b == '/')
            swi = 4;
        c = a;
    }

}
