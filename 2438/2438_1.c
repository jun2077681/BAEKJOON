#include <stdio.h>
int main(void)
    {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
        {
        int k=i;
        while(k>0)
            {
        printf("*");
            k--;
        }
        printf("\n");
    }
}
