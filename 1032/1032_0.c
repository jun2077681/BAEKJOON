#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    char filename[50][51];
    char *patton;

    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 51; j++)
        {
            filename[i][j] = NULL;
        }
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%s", filename[i]);
    }

    patton = (char *)malloc(sizeof(char)*(strlen(filename[0]) + 1));

    for (int i = 0; i < strlen(filename[0]) + 1; i++)
        patton[i] = NULL;

    int j;
    for (int i = 0; i < strlen(filename[0]); i++)
    {
        for (j = 0; j < N - 1; j++)
        {
            if (filename[j][i] != filename[j + 1][i])
            {
                patton[i] = '?';
                break;
            }
        }
        if (patton[i] != '?')
            patton[i] = filename[j][i];
    }

    printf("%s", patton);
}
