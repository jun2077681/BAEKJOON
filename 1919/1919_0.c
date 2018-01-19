#include <stdio.h>
#include <string.h>
#include <math.h>

int bigger(int a, int b)
{
    return a > b ? a : b;
}
int smaller(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    char am[26], bm[26];
    int answer = 0;

    for (int i = 0; i < 26; i++)
    {
        am[i] = 0;
        bm[i] = 0;
    }

    char temp;
    while ((temp = getchar()) != '\n')
        am[temp - 97]++;
    while ((temp = getchar()) != EOF)
        bm[temp - 97]++;

    for (int i = 0; i < 26; i++)
        answer = answer + bigger(am[i], bm[i]) - smaller(am[i], bm[i]);

    printf("%d", answer);
}
