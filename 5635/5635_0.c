#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

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

typedef struct student
{
    char name[16];
    int day;
    int month;
    int year;
}student;

int main(void)
{
    int n;
    scanf("%d", &n);
    student *a;
    a = (student*)malloc(sizeof(student)*n);
    student young = { "a",99,99,9999 };
    student old = { "a",00,00,0000 };

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", &a[i].name, &a[i].day, &a[i].month, &a[i].year);
        if (a[i].year > old.year)
        {
            old = a[i];
        }
        else if (a[i].year == old.year)
        {
            if (a[i].month > old.month)
            {
                old = a[i];
            }
            else if (a[i].month == old.month)
            {
                if (a[i].day > old.day)
                {
                    old = a[i];
                }
            }
        }

        if (a[i].year < young.year)
        {
            young = a[i];
        }
        else if (a[i].year == young.year)
        {
            if (a[i].month < young.month)
            {
                young = a[i];
            }
            else if (a[i].month == young.month)
            {
                if (a[i].day < young.day)
                {
                    young = a[i];
                }
            }
        }
    }

    printf("%s\n%s", old.name, young.name);
}
