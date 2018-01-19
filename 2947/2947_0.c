#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *a,int *b)
{
    int temp = (*a);
    (*a) = (*b);
    (*b) = temp;
}
void a(int arr[])
{
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(&arr[i], &arr[i + 1]);
            for (int i = 1; i <= 5; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }
}
int main(void)
{
    int arr[6];
    for (int i = 1; i <= 5; i++)
        scanf("%d", &arr[i]);
    int check = 1;
    while (check)
    {
        check = 0;
        a(arr);
        for (int i = 1; i <= 5; i++)
            if (arr[i] != i)
                check = 1;
    }

}
