#include <bits/stdc++.h>
using namespace std;
void Cynical(int arr[],int size)
{
    int a[size];
    for(int i=0;i<size-1;i++)
    {
        a[i+1] = arr[i];
    }
    a[0]=arr[size-1];
    for(auto i:a)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int arr[]={1,2,3,5,988,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    Cynical(arr,size);
    return 0;
}