#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct queueNode {
    int data1;
    int data2;
    int data3;
    struct queueNode *nextPtr;
};



typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, int x, int y, int l);
void dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
int isEmpty(QueueNodePtr headPtr);

int m, n, count = 0;
int map[101][101];
QueueNodePtr headPtr = NULL;
QueueNodePtr tailPtr = NULL;

void BFS(int x, int y)
{
    int pos = 0;
    int tempx, tempy, templ;
    enqueue(&headPtr, &tailPtr, x, y, 1);
    while (pos < count && ((tailPtr->data1 != n - 1) || (tailPtr->data2 != m - 1)))
    {
        tempx = headPtr->data1;
        tempy = headPtr->data2;
        templ = headPtr->data3;
        if (tempy > 0 && map[tempx][tempy - 1] == 1)
            enqueue(&headPtr, &tailPtr, tempx, tempy - 1, templ + 1);
        if (tempy < m - 1 && map[tempx][tempy + 1] == 1)
            enqueue(&headPtr, &tailPtr, tempx, tempy + 1, templ + 1);
        if (tempx > 0 && map[tempx - 1][tempy] == 1)
            enqueue(&headPtr, &tailPtr, tempx - 1, tempy, templ + 1);
        if (tempx < n - 1 && map[tempx + 1][tempy] == 1)
            enqueue(&headPtr, &tailPtr, tempx + 1, tempy, templ + 1);

        pos++;
        dequeue(&headPtr, &tailPtr);
    }
    if (pos < count)
        printf("%d", tailPtr->data3);
}

int main(void)
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%1d", &map[i][j]);
    BFS(0, 0);
    return 0;
}

void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, int x, int y, int l)
{
    map[x][y] = 0;
    QueueNodePtr newPtr;
    count++;
    newPtr = malloc(sizeof(QueueNode));

    if (newPtr != NULL)
    {
        newPtr->data1 = x;
        newPtr->data2 = y;
        newPtr->data3 = l;
        newPtr->nextPtr = NULL;
        if (isEmpty(*headPtr))
        {
            *headPtr = newPtr;
        }
        else
        {
            (*tailPtr)->nextPtr = newPtr;
        }
        *tailPtr = newPtr;
    }
    else
    {
        return -1;
    }
}
void dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr)
{
    int value1, value2, value3;
    QueueNodePtr tempPtr;
    value1 = (*headPtr)->data1;
    value2 = (*headPtr)->data2;
    value3 = (*headPtr)->data3;
    tempPtr = *headPtr;
    *headPtr = (*headPtr)->nextPtr;
    if (*headPtr == NULL)
        *tailPtr = NULL;
    free(tempPtr);
}

int isEmpty(QueueNodePtr headPtr)
{
    return headPtr == NULL;
}
