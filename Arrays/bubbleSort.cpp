#include<bits/stdc++.h>
using namespace std;
void swap(int &x,int &y)
{
    int temp =x;
    x =y;
    y =temp;
}
void BubbleSort(vector<int> &arr , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    vector<int> arr;
    for(int i=0;i<10;i++)
    {
        arr.push_back((rand() % 50) * (i+1));
    }
    int n = arr.size();
    cout<<n<<endl;
    BubbleSort(arr,n);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}