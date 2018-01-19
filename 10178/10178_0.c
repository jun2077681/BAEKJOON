#include <stdio.h>
int main()
    {
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
        {
        int a,b;
        scanf("%d %d",&a,&b);
        int c=a/b;
        int d=a%b;
        printf("You get %d piece(s) and your dad gets %d piece(s).\n",c,d);
        }
    }
