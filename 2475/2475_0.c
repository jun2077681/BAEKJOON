#include <stdio.h>

int main(void)
    {
    int a[5];
    int answer=0;
    for(int i=0;i<5;i++)
        {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
        {
        answer=answer+a[i]*a[i];
    }
    printf("%d",answer%10);
}
