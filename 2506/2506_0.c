#include <stdio.h>
int main(void) {
    int n = 0;
    scanf("%d", &n);
    int count = 0;
    int temp = 0;
    int score = 0;
    while (n--) {
        scanf("%d", &temp);
        if (temp) {
            count++;
            score += count;
        }
        else {
            count = 0;
        }
    }
    printf("%d", score);
    return 0;
}
