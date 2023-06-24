
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int arr[n] = {0,10,50,-50,10,60,-5,-3,-77,-1};
    for (int i = 0; i < n; i++)
    {
        sort(arr,arr+n);
        // reverse(arr,arr+n);
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    
    return 0;

}