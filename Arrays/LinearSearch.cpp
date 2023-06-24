
#include<iostream>
using namespace std;
int LinearSearch(int *arr, int key)
{
    for(int i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i] = rand();
    }
    int key;
    cin>>key;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<LinearSearch(arr,key);

    return 0;

}