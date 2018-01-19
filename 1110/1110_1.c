#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int NewNumber(int N);

int main(void)
{
    int N;
    int count = 0;
    scanf("%d", &N);
    int temp = N;

    do
    {
        temp = NewNumber(temp);
        count++;
    } while (temp != N);

    printf("%d", count);
}

int NewNumber(int N)
{
    int k = N % 10 + N / 10;
    int nenum = N % 10 * 10 + k % 10;

    return nenum;
}
