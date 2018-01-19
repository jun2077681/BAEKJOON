#include <stdio.h>

int main(void)
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int ans1, ans2, answer;

    ans1 = w - x;
    ans2 = h - y;

    answer = x;

    if (answer > y)
        answer = y;
    if (answer > ans1)
        answer = ans1;
    if (answer > ans2)
        answer = ans2;

    printf("%d", answer);
}
