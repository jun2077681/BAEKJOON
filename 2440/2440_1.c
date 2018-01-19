#include <stdio.h>
int main(void)
    {
    int a;
    scanf("%d",&a);
    for(int i=a;i>=1;i--)
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
