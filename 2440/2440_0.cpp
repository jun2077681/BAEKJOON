#include <iostream>
 
int main(void)
    {
    int a;
    std::cin>>a;
    for(int i=a;i>0;i--)
        {
        int k=i;
        while(k>0)
            {
            std::cout<<"*";
            k--;
        }
        std::cout<<"\n";
        }
    }
