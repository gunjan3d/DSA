#include<iostream>
using namespace std;
int CountStairs(int n)
{
    if(n<0)
    {
    return 0;

    }
    if(n==0)
    {
        return 1;
    }

    return CountStairs(n-1) + CountStairs(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<CountStairs(n);
    return 0;
}