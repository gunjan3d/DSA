/*Find the index of first and last occurrence of a given element (key) in a sorted array consisting of
duplicate elements.
(use binary search)
Ex - arr[] = {1,3,4,4,4,4,7,7,8} and key = 4
     Output = 2 5 (return pair of first and last index)
*/

#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int k);
int lastOcc(int arr[], int n, int k);
pair<int, int> result(int arr[], int n, int k);

int main()
{
    int n;
    cout << "\nEnter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "\nEnter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cout << "\nEnter the key element: "; // element whose first and last occurrence is to be found
    cin >> k;

    cout << "\nFirst and last index of " << k << " are: ";
    result(arr, n, k);

    return 0;
}

pair<int, int> result(int arr[], int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}

int firstOcc(int arr[], int n, int k)
{
    int l = 0, h = n - 1;
    int ans = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (arr[mid] == k)
        {
            ans = mid;
            h = mid - 1; 
            /*because if mid is not the first occurrence of that element then it's first occurrence
                           will definitely be in the left half of the array, i.e., before mid so we simply
                           restrict our search in the first half by shifting high (h)*/
        }
        else if (k > arr[mid])
            l = mid + 1;
        else // k < arr[mid]
            h = mid - 1;
    }
    return ans;
}

int lastOcc(int arr[], int n, int k)
{
    int l = 0, h = n - 1;
    int ans = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (arr[mid] == k)
        {
            ans = mid;
            l = mid + 1; /*because if mid is not the last occurrence of that element then it's last occurrence
                           will definitely be in the right half of the array, i.e., after mid so we simply
                           restrict our search in the later half by shifting low (l)*/
        }
        else if (k > arr[mid])
            l = mid + 1;
        else // k < arr[mid]
            h = mid - 1;
    }
    return ans;
}