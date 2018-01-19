#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    double *a;
    a = (double*)malloc(sizeof(double)*N);
    double big = 0;
    double sum = 0;
    double avg = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &a[i]);
        if (big < a[i])
        {
            big = a[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        a[i] = (a[i] / big) * 100;

        sum += a[i];
    }

    avg = sum / N;
    printf("%.2lf", avg);
}

