#include <stdio.h>

int main(void)
    {
    int a,b,c;
    int ma[10];
    for(int i=0;i<10;i++)
        ma[i]=0;
    scanf("%d %d %d",&a,&b,&c);
    int k=a*b*c;
    while(k)
        {
        ma[k%10]++;
        k/=10;
    }
    for(int i=0;i<10;i++)
        printf("%d\n",ma[i]);
}
