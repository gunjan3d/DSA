
#include <iostream>
#include <climits>
#include "ManMadeArray.h"
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int Curr = 0;
    int Max = arr[0];
    int n = SizeofAarry(arr);
    // kadanes algo
    for (int i = 0; i < n; i++)
    {
        Curr = Curr + arr[i];
        if (Curr < 0)
        {
            Curr = 0;
        }
        if (Curr > Max)
        {
            Max = Curr;
        }
    }
    cout << Max;
    return 0;
}