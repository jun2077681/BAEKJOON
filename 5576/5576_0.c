#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int W[10], K[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &W[i]);
    for (int i = 0; i < 10; i++)
        scanf("%d", &K[i]);

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (W[i] > W[j])
            {
                int temp = W[i];
                W[i] = W[j];
                W[j] = temp;
            }
            if (K[i] > K[j])
            {
                int temp = K[i];
                K[i] = K[j];
                K[j] = temp;
            }
        }
    }
    printf("%d %d", W[7] + W[8] + W[9], K[7] + K[8] + K[9]);
}
