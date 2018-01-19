#include <iostream>

int main(void)
    {
    int a,b,c;
    int temp;
    std::cin>>a>>b>>c;
    if(a<b)
        {
        temp=a;
        a=b;
        b=temp;
    }
    if(a<c)
        {
        temp=a;
        a=c;
        c=temp;
    }
    if(b<c)
        {
        temp=b;
        b=c;
        c=temp;
    }
    std::cout<<b;
}
