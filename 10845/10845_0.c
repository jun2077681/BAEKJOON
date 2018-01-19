#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct queueNode {
    int data;
    struct queueNode *nextPtr;
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, int value);
int dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
int isEmpty(QueueNodePtr headPtr);
void printQueue(QueueNodePtr currentPtr);

int main(void) {

    QueueNodePtr headPtr = NULL;
    QueueNodePtr tailPtr = NULL;
    int value;
    int n;
    scanf("%d", &n);
    char order[6];
    while (n--)
    {
        scanf("%s", &order);
        if (!strcmp(order, "push"))
        {
            scanf("%d", &value);
            enqueue(&headPtr, &tailPtr, value);
        }
        else if (!strcmp(order, "pop"))
        {
            if (!isEmpty(headPtr))
                printf("%d\n", dequeue(&headPtr,&tailPtr));
            else
                printf("%d\n", -1);
        }
        else if (!strcmp(order, "size"))
        {
            printQueue(headPtr);
        }
        else if (!strcmp(order, "empty"))
        {
            printf("%d\n", isEmpty(headPtr));
        }
        else if (!strcmp(order, "front"))
        {
            if (!isEmpty(headPtr))
            {
                printf("%d\n", headPtr->data);
            }
            else
            {
                printf("%d\n", -1);
            }
        }
        else if (!strcmp(order, "back"))
        {
            if (!isEmpty(tailPtr))
            {
                printf("%d\n", tailPtr->data);
            }
            else
            {
                printf("%d\n", -1);
            }
        }
    }
    
    return 0;

}

void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, int value) {

    QueueNodePtr newPtr;

    newPtr = malloc(sizeof(QueueNode));

    if (newPtr != NULL)
    {
        newPtr->data = value;
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
int dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr) {
    QueueNodePtr tempPtr;
    int value;

    value = (*headPtr)->data;
    tempPtr = *headPtr;
    *headPtr = (*headPtr)->nextPtr;

    if (*headPtr == NULL)
    {
        *tailPtr = NULL;
    }

    free(tempPtr);
    return value;
}
int isEmpty(QueueNodePtr headPtr) {
    return headPtr == NULL;
}
void printQueue(QueueNodePtr currentPtr) {
    int count = 0;

    while (currentPtr != NULL) {
        count++;
        currentPtr = currentPtr->nextPtr;
    }
    printf("%d\n", count);
}

