#include<bits/stdc++.h>
using namespace std;
int c =0;
void Merge(vector<int>arr, int s, int e)
{
    int mid = (s + e) / 2;
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int a[l1];
    int b[l2];
    int k = s;
    for (int i = 0; i < l1; i++)
    {
        a[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < l2; i++)
    {
        b[i] = arr[k++];
    }
    int i = 0, j = 0;
    k = s;
    while (i < l1 && j < l2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            c += (mid - l1);
            j++;
            k++;
        }
    }
    while (i < l1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < l2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}
void MergeSort(vector<int>arr, int s, int e)
{
    int mid = (s + e) / 2;
    if (s >= e)
    {
        return;
    }
    MergeSort(arr, s, mid);
    MergeSort(arr, mid + 1, e);
    Merge(arr, s, e);
}
int CountInversion(vector<int> arr)
{
    int cnt =0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j= i+1;j<arr.size();j++)
        {
            if(arr[i]>arr[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    vector<int> arr;
    for(int i=0;i<10;i++)
    {
        arr.push_back((rand()%10)*i+1);
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<CountInversion(arr)<<endl;
    MergeSort(arr,0,arr.size()-1);
    cout<<c<<endl;
    return 0;
}