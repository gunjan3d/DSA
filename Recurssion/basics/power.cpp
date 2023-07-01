#include<iostream>
int power(int n)
{
    if (n==0)
    {
        return 1;
        /* code */
    }
    return 2 * power(n-1);
    
}

int main()
{
    int n;
    std::cin>>n;
    std::cout<<power(n);
    return 0;
}