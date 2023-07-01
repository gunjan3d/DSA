#include<iostream>

int fibonaci(int n)
{
    if(n<1)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fibonaci(n-1) + fibonaci(n-2);
}
int main()
{
    int n;
    std::cin>>n;
    std::cout<<fibonaci(n)<<std::endl;
    return 0;
}