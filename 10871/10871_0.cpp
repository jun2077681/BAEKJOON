#include <iostream>

int main(void)
    {
    int n,x;
    std::cin>>n>>x;
    int *a=new int[n];
    
    for(int i=0;i<n;i++)
        {
        std::cin>>a[i];
        if(a[i]<x)
            {
            std::cout<<a[i]<<" ";
        }
    }
}
