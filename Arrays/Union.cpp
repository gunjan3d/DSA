
#include <bits/stdc++.h>
#include "ManMadeArray.h"
using namespace std;
vector<int> Unionarray(int arr1[], int arr2[], int n, int m)
{
    set<int> s;
    
    for (int i = 0; i < n; i++) {
        s.insert(arr1[i]);
    }
 
   
    
    for (int i = 0; i < m; i++) {
        s.insert(arr2[i]);
    }
 
    // Loading set to vector
    vector<int> vec(s.begin(), s.end());
 
    return vec;
}
int main()
{
    int arr1[] = {1 ,2 ,3 ,4 ,5};
    int arr2[] = {1,2,3,4};
    int s1= SizeofAarry(arr1);
    int s2= SizeofAarry(arr2);
    vector<int> uni = Unionarray(arr1, arr2, SizeofAarry(arr1), SizeofAarry(arr2));
    for (int i : uni) {
        cout << i << " ";
    }
    return 0;
}
