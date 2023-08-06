#include<bits/stdc++.h>
using namespace std;

void Move(int* arr,int n)
{
    int i=0,j=0;
    while(j<n)
    {
        if(arr[j]<0)
        {
            swap(arr[i],arr[j]);
            i++;j++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    int n = 10;
    int arr[n] = {0,10,50,-50,10,60,-5,-3,-77,-1};

    
    // sort(arr,arr+n);
    // reverse(arr,arr+n);
    Move(arr,n);
    
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;

}
