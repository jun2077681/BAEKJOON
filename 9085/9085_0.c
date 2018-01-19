#include <stdio.h>
int main(void)
    {
    int t;
    scanf("%d",&t);
    while(t--)
        {
        int n;
        scanf("%d",&n);
        int sum=0;
        while(n--)
            {
            int temp;
            scanf("%d",&temp);
            sum+=temp;
        }
        printf("%d\n",sum);
    }
}
