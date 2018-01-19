#include <iostream>
 
int main(void)
    {
    int a;
    std::cin>>a;
    for(int i=a;i>0;i--)
        {
        int k=i,l=a-i;
        while(l>0)
            {
            std::cout<<" ";
            l--;
        }
        while(k>0)
            {
            std::cout<<"*";
            k--;
        }
        std::cout<<"\n";
    }
}
