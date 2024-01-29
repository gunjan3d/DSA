#include<bits/stdc++.h>
using namespace std;
int maxProfits(vector<int> &prices)
{
    int maxi = 0;
    int l=0,r=0;
    while(r<prices.size())
    {
        if(prices[r]-prices[l]<0){
            r++;l++;
        }
        else{
            maxi = max(maxi,prices[r]-prices[l]);
            r++;
        }
    }
    return maxi;
}
int main()
{
    vector<int> prices = {7,6,4,3,1};
    cout<<maxProfits(prices);
    return 0;
}