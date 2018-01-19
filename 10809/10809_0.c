#include <stdio.h>
#include <math.h>

int main(void)
{
    char S[101] = { NULL };
    scanf("%s", S);
    char a[26];
    for (int i = 0; i < 26; i++)
        a[i] = -1;

    for (int i = 0; i < 101; i++)
    {
        if (S[i] >= 'a'&&S[i] <= 'z')
        {
            if (a[S[i] - 97] == -1)
            {
                a[S[i] - 97] = i;
            }
        }
        else
            break;
    }

    for (int i = 0; i < 26; i++)
        printf("%d ", a[i]);
}

