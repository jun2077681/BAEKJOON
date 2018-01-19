#include <stdio.h>

int fac(int a)
{
    if(a==0)
        return 1;
    else if(a==1)
        return 1;
    else
        return fac(a-1)*a;
}
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",fac(n));
}
