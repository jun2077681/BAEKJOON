#include <stdio.h>

int main(void)
    {
    int num;
    scanf("%d",&num);
    int *a;
    a=(int *)malloc(sizeof(int)*num);
    for(int i=0;i<num;i++)
        {
        scanf("%d",&a[i]);
    }
    
    int max=0,min=1000000;
    for(int i=0;i<num;i++)
        {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("%d",max*min);
}
