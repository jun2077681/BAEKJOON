#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    int score = 0;
    int k = 0;
    char OX[80];
    int buff;
    scanf("%d", &N);
    scanf("%d", &buff);
    for (int i = 0; i < N; i++)
    {
        score = 0;
        k = 1;
        for (int j = 0;; j++)
        {
            OX[j] = getchar();
            if (OX[j] == '\n')
                break;
            if (OX[j] == 'O')
            {
                score += k;
                k++;
            }
            else
                k = 1;
        }
        printf("%d\n", score);
    }
}

