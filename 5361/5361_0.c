#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    double A, B, C, D, E;
    scanf("%d", &N);
    double V = 350.34;
    double W = 230.90;
    double X = 190.55;
    double Y = 125.30;
    double Z = 180.90;
    for (int i = 0; i < N; i++)
    {
        scanf("%lf %lf %lf %lf %lf", &A, &B, &C, &D, &E);
        double answer = A*V + B*W + C*X + D*Y + E*Z;
        printf("$%.2lf\n", answer);
    }
}
