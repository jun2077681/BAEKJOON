#include <stdio.h>

int main(void)
{
    int Aatk, Alife, Batk, Blife;

    scanf("%d %d", &Aatk, &Alife);
    scanf("%d %d", &Batk, &Blife);

    while (1)
    {
        Alife -= Batk;
        Blife -= Aatk;

        if (Alife <= 0)
        {
            if (Blife <= 0)
            {
                printf("DRAW");
                break;
            }
            else
            {
                printf("PLAYER B");
                break;
            }
        }
        else if (Blife <= 0)
        {
            printf("PLAYER A");
            break;
        }
        else
            continue;
    }
}
