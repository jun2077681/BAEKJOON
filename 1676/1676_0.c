#include <stdio.h>
#pragma warning (disable : 4996)

int main(void) {
    int n = 0;
    scanf("%d", &n);
    int count = 0;
    if(n==0)
    {
        printf("0");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while (1) {
            if (temp % 5 == 0)
            {
                count++;
                temp /= 5;
            }
            else
                break;
        }
    }
    printf("%d", count);
    return 0;
}
