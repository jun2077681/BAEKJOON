#include <stdio.h>
#include <math.h>
int main()
{
    int T,N;
    int rN=0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        int temp = N;
        rN = 0;
        while (temp > 0)
        {
            rN *= 10;
            rN += temp % 10;
            temp /= 10;
        }
        int a = rN + N;
        temp = a;
        int num[100];
        int j = 0;
        while (a > 0)
        {
            num[j] = a % 10;
            a /= 10;
            j++;
        }
        int check = 0;
        while (temp > 0)
        {
            if (num[j -1] != temp % 10)
            {
                check = 1;
                break;
            }
            temp /= 10;
            j--;
        }
        if (check)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
}
