#include <bits/stdc++.h>
using namespace std;
int BinearySearch(int arr[],int s, int e, int k)
{
    if(e==0 || s>e)
    {
        return -1;
    }
    int mid = (s+e)/2;
    if(arr[mid] == k)
    {
        return true;
    }
    if(k>arr[mid])
    {
        return BinearySearch(arr,mid+1,e,k);
       
    }
    else
    {
        return BinearySearch(arr,0,mid-1,k);
        
    }
}
int main()
{
    int arr[10] = {1,2,3,4,15,26,37,48,89,100};
    int key = 104;
    cout<<BinearySearch(arr,0,10,key);
    return 0;
}