#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[], int size, int key)
{
    if(size == 0)
    {
        return -1;
    }
    if(arr[0] == key)
    {
        return 1;
    }
    else
    {
        int ans = LinearSearch(arr+1,size-1,key);
        return ans;
    }
}
int main()
{
    int arr[5] = {1,5,3,8,7};
    int key = 5;
    cout<<LinearSearch(arr,5,key);
    return 0;
}