#include <stdio.h>

int main(void)
    {
    int k=64;
    int x;
    scanf("%d",&x);
    int ans=0;
    while(1)
        {
        if(x-k>=0)
            {
            x-=k;
            ans++;
        }
        k/=2;
        if(x==0)
            break;
    }
    printf("%d",ans);
}
