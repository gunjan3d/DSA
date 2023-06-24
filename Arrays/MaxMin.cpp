#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {23,45,5,6,8,25,6,5};
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++)
    {
        mini = min(arr[i],mini);
        maxi = max(arr[i],maxi);
    }
    cout<<mini<<" "<<maxi;
    return 0;
}