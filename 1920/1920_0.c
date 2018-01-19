#include <stdio.h>
#include <stdlib.h>
#include <string.h>

quick(int x[], int L, int R)
{
    int i = L, j = R, tmp;
    int pivot = x[(L + R) / 2];

    while (i <= j)
    {
        while (x[i] < pivot)
            i++;
        while (x[j] > pivot)
            j--;

        if (i <= j)
        {
            tmp = x[i];
            x[i] = x[j];
            x[j] = tmp;
            i++, j--;
        }
    }
    if (L < j)
        quick(x, L, j);
    if (i < R)
        quick(x, i, R);
}
int binarySearch(const int b[], int searchKey, int low, int high);

int main(void)
{
    int N;
    scanf("%d", &N);
    int *a;
    a = (int*)malloc(sizeof(int)*N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    quick(a, 0, N-1);

    int M;
    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        int temp;
        scanf("%d", &temp);
        int result;
        result = binarySearch(a, temp, 0, N - 1);
        if (result == -1)
        {
            printf("0\n");
        }
        else
            printf("1\n");
    }

}

int binarySearch(const int b[], int searchKey, int low, int high) {
    int middle;
    middle = (high + low) / 2;
    if (searchKey == b[middle]) return middle;
    else if (low > high) return -1;
    else if (searchKey < b[middle]) binarySearch(b, searchKey, low, middle - 1);
    else if (searchKey > b[middle]) binarySearch(b, searchKey, middle + 1, high);



}
