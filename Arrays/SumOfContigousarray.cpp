
#include <iostream>
#include <climits>
#include "ManMadeArray.h"
using namespace std;
int main()
{
    int arr[] = {1, 2, -3, 2, 5};
    int Curr = 0;
    int Max = INT_MIN;
    int n = SizeofAarry(arr);
    // kadanes algo
    // for (int i = 0; i < n; i++)
    // {
    //     Curr = Curr * arr[i];
    //     Curr = max (Curr,arr[i]);
    //     Max = max(Curr,Max);
    //     if (Curr > Max)
    //     {
    //         Max = Curr;
    //     }
    //     if (Curr < 0)
    //     {
    //         Curr = 0;
    //     }  
    // }
     int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < n; i++) {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    cout<< max_so_far;
    // cout << Max;
    return 0;
}