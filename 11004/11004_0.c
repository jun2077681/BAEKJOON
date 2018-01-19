#include <stdio.h>
#include <stdlib.h>

void swap(int *src1, int *src2)
{
    int tmp=0;
    tmp=*src1;
    *src1=*src2;
    *src2=tmp;
}
int partition(int list[], int left, int right)
{
    int pivot=left;
    left++;
    while(left<=right)
    {
        while(list[left]<=list[pivot]&&left<right)
        {
            left++;
        }
        while(list[right]>=list[pivot]&&left<=right)
        {
            right--;
        }
        
        if(left<right)
        {
            swap(&list[left],&list[right]);
        }
        else
        {
            break;
        }
    }
    swap(&list[pivot],&list[right]);
    return right;
}

void quick_sort(int list[], int left, int right)
{
    if (left < right) {
        int q = partition(list, left, right);
        quick_sort(list, left, q);
        quick_sort(list, q + 1, right);
    }
}

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);

    int *a;
    a = (int*)malloc(sizeof(int)*N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    quick_sort(a, 0, N-1);
    printf("%d", a[K-1]);
}

