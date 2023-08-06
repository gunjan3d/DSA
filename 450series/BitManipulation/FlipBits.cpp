#include<bits/stdc++.h>
using namespace std;
int countSetBit(int n)
{
    int count =0;
    while(n)
    {
       n = n & (n-1);
        count++;
    }
    return count;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int temp = a^b;
    cout<<countSetBit(temp);
    return 0;
}