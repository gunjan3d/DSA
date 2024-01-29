#include<bits/stdc++.h>
using namespace std;
void shuffle(vector<int> &nums){
    int i=0,j=1;
    while(j<nums.size() && i<j)
    {
        if(nums[j]<0){
            swap(nums[j],nums[i]);
            j++;i++;
        }
        else j++;
    }
}
int main(){

    vector<int> nums = {1,2,-3,4,-5,6};
    shuffle(nums);
    for(auto i:nums){
        cout<<i<<" ";
    }
    return 0;
}