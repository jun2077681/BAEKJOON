#include <stdio.h>

int main(void)
{
    int n1, n2;
    int T;
    int big[100], small[100];
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &n1, &n2);
        if (n1 >= n2)
        {
            big[i] = n1;
            small[i] = n2;
        }
        else
        {
            big[i] = n2;
            small[i] = n1;
        }
    }

    for(int i=0;i<T;i++)
    {
        if (big[i] != small[i])
        {
            switch (big[i])
            {
            case 2:
                printf("Case %d: Doh ", i+1);
                break;
            case 3:
                printf("Case %d: Seh ", i+1);
                break;
            case 4:
                printf("Case %d: Ghar ", i+1);
                break;
            case 5:
                printf("Case %d: Bang ", i+1);
                break;
            case 6:
                printf("Case %d: Sheesh ", i+1);
                break;
            default:
                break;
            }
            switch (small[i])
            {
            case 1:
                printf("Yakk \n");
                break;
            case 2:
                printf("Doh \n");
                break;
            case 3:
                printf("Seh \n");
                break;
            case 4:
                printf("Ghar \n");
                break;
            case 5:
                if (big[i] == 6)
                    printf("Beesh \n");
                else
                    printf("Bang \n");
                break;
            default:
                break;
            }
        }
        else
        {
            switch (big[i])
            {
            case 1:
                printf("Case %d: Habb Yakk \n", i+1);
                break;
            case 2:
                printf("Case %d: Dobara \n", i+1);
                break;
            case 3:
                printf("Case %d: Dousa \n", i+1);
                break;
            case 4:
                printf("Case %d: Dorgy \n", i+1);
                break;
            case 5:
                printf("Case %d: Dabash \n", i+1);
                break;
            case 6:
                printf("Case %d: Dosh \n", i+1);
                break;
            default:
                break;
            }
        }
    }
    return 0;
}
