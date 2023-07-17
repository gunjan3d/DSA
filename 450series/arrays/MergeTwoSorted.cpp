#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int &size1, int &size2)
{
    int j=0;
    int i=size1-1;
    while (i>=0 && j<size2)
    {
        /* code */if(arr1[i]>=arr2[j])
        {
            swap(arr1[i],arr2[j]);
            i--;j++;
        }
        else
        {
            i--;j++;
        }
    }
    sort(arr1,arr1+size1);
    sort(arr2,arr2+size2);
    
}
int main()
{
    int arr1[] = {2,4,5,6,8,52,2};
    int arr2[] = {52,2565,6468,8,5,5,2,3,3};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    sort(arr1,arr1+size1);
    sort(arr2,arr2+size2);
    merge(arr1,arr2,size1,size2);
    for(int i=0;i<size1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size2;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}