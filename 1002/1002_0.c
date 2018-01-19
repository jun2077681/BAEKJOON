#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable:4996)

struct location
{
    int x1;
    int x2;
    int y1;
    int y2;
    int r1;
    int r2;
};

typedef struct location loca;
int testnum(loca locaPtr);
double len(int x1, int y1, int x2, int y2);

int main(void)
{
    int N;
    loca* locaPtr;
    scanf("%d", &N);
    locaPtr = (loca*)malloc(sizeof(loca)*N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d %d %d %d %d", &locaPtr[i].x1, &locaPtr[i].y1, &locaPtr[i].r1, &locaPtr[i].x2, &locaPtr[i].y2, &locaPtr[i].r2);
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", testnum(locaPtr[i]));
    }

    return 0;
}

int testnum(loca locaPtr)
{
    if ((locaPtr.x1 == locaPtr.x2)&&(locaPtr.y1 == locaPtr.y2)&&(locaPtr.r1 == locaPtr.r2))
    {
        if (locaPtr.r1 == locaPtr.r2)
            return -1;
        else
            return 0;
    }
    else if (len(locaPtr.x1, locaPtr.y1, locaPtr.x2, locaPtr.y2)<pow(locaPtr.r1 - locaPtr.r2,2))
    {
        return 0;
    }
    else if (len(locaPtr.x1, locaPtr.y1, locaPtr.x2, locaPtr.y2)==pow(locaPtr.r1 - locaPtr.r2,2))
    {
        return 1;
    }
    else
    {
        if (len(locaPtr.x1, locaPtr.y1, locaPtr.x2, locaPtr.y2) > pow(locaPtr.r1 + locaPtr.r2, 2))
        {
            return 0;
        }
        else if (len(locaPtr.x1, locaPtr.y1, locaPtr.x2, locaPtr.y2) == pow(locaPtr.r1 + locaPtr.r2, 2))
        {
            return 1;
        }
        else if (len(locaPtr.x1, locaPtr.y1, locaPtr.x2, locaPtr.y2) < pow(locaPtr.r1 + locaPtr.r2, 2))
        {
            return 2;
        }
    }
}

double len(int x1, int y1, int x2, int y2)
{
    double x;
    x = pow((x2 - x1), 2)+pow((y2 - y1), 2);
    return x;
}
