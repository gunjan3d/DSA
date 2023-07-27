#include<bits/stdc++.h>
using namespace std;
int armstrong(int n)
{
    int x =n;
    int ans =0;
    while (x>0)
    {
        int rem =0;
        rem = x % 10;
        ans += rem * rem * rem;
        x /= 10; 
    }
    if(n == ans)
    return 1;
    else
    {
        return -1;
    }
    
}
int main()
{
    int n;
    cin>>n;
    cout<<armstrong(n);
    return 0;
}