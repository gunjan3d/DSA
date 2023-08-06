#include <bits/stdc++.h>
using namespace std;

void Merge(int *arr, int s, int e)
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
void MergeSort(int *arr, int s, int e)
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
int main()
{
    int arr[] = {2, 5, 1, 6, 9};
    // for (int i = 0; i < 10; i++)
    // {
    //     arr[i] = 10 - i  + rand() % 10 ;
    // }
    cout << endl;
    cout << "before sorting\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    MergeSort(arr, 0, 4);
    cout << "\nAfter sorting\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}