#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int first[26];
    int sen[26];
    int count = 0;
    char temp;
    for (int i = 0; i < 26; i++)
    {
        first[i] = 0;
    }
    int n;
    scanf("%d", &n);
    scanf("%d", &temp);
    
    while (1)
    {
        temp = getchar();
        if (temp == '\n')
            break;
        first[temp - 65]++;
    }
    for (int aa = 0; aa < n-1; aa++)
    {
        for (int i = 0; i < 26; i++)
        {
            sen[i] = 0;
        }
        while (1)
        {
            temp = getchar();
            if (temp == '\n')
                break;
            sen[temp - 65]++;
        }
        int check = 0;
        int itemp;
        for (int i = 0; i < 26; i++)
        {
            if (first[i] != sen[i])
            {
                check++;
                itemp = first[i] - sen[i];
            }
        }
        int count1 = 0, count2 = 0;
        switch (check)
        {
        case 0:
            count++;
            break;
        case 1:
            if (abs(itemp) == 1)
                count++;
            break;
        case 2:
            for (int i = 0; i < 26; i++)
            {
                count1 += first[i];
                count2 += sen[i];
            }
            if (count1 == count2)
                count++;
            break;
        default:
            break;
        }
    }
    printf("%d", count);
}
