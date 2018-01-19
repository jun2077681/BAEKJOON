#include <stdio.h>
int main(void)
    {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
        {
        int k=i,l=a-i;
        while(l>0)
            {
            printf(" ");
            l--;
        }
        while(k>0)
            {
            printf("*");
            k--;
        }
        printf("\n");
    }
    return 0;
}
