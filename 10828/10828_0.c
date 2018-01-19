#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#pragma warning(disable:4996)

struct stackNode {
    int data;
    struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);

int main(void) {

    StackNodePtr stackPtr = NULL;
    int value;
    int N;
    scanf("%d", &N);
    char order[6];
    while (N--)
    {
        scanf("%s",&order);
        if (!strcmp(order,"push"))
        {
            scanf("%d", &value);
            push(&stackPtr, value);
        }
        else if (!strcmp(order,"pop"))
        {
            if (!isEmpty(stackPtr))
                printf("%d\n", pop(&stackPtr));
            else
                printf("%d\n", -1);
        }
        else if (!strcmp(order,"size"))
        {
            printStack(stackPtr);
        }
        else if (!strcmp(order,"empty"))
        {
            printf("%d\n", isEmpty(stackPtr));
        }
        else if (!strcmp(order,"top"))
        {
            if (!isEmpty(stackPtr))
            {
                printf("%d\n", stackPtr->data);
            }
            else
            {
                printf("%d\n", -1);
            }
        }
    }
    
    return 0;

}

void push(StackNodePtr *topPtr, int info) {

    StackNodePtr newPtr;

    newPtr = malloc(sizeof(StackNode));

    if (newPtr != NULL)
    {
        newPtr->data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    }
    else
    {
        printf("%d not inserted. No memory available.\n", info);
    }

}
int pop(StackNodePtr *topPtr) {
    StackNodePtr tempPtr;
    int popValue;

    tempPtr = *topPtr;
    popValue = (*topPtr)->data;
    *topPtr = (*topPtr)->nextPtr;
    free(tempPtr);

    return popValue;
}
int isEmpty(StackNodePtr topPtr) {
    return topPtr == NULL;
}
void printStack(StackNodePtr currentPtr) {
    int count = 0;
    while (currentPtr != NULL) {
        count++;
        currentPtr = currentPtr->nextPtr;
    }
    printf("%d\n",count);
}
