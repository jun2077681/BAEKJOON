#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#pragma warning(disable:4996)

void swap(int *src1, int *src2)
{
    int tmp = 0;
    tmp = *src1;
    *src1 = *src2;
    *src2 = tmp;
}

int partition_down(int list[], int left, int right)
{
    int pivot = left;
    left++;
    while (left <= right)
    {
        while (list[left] >= list[pivot] && left<right)
        {
            left++;
        }
        while (list[right] <= list[pivot] && left <= right)
        {
            right--;
        }

        if (left<right)
        {
            swap(&list[left], &list[right]);
        }
        else
        {
            break;
        }
    }
    swap(&list[pivot], &list[right]);
    return right;
}


void quick_sort_down(int list[], int left, int right)
{
    if (left < right) {
        int q = partition_down(list, left, right);
        quick_sort_down(list, left, q);
        quick_sort_down(list, q + 1, right);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quick_sort_down(arr,0,n-1);
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}
