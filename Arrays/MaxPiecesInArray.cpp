#include<iostream>
#include<vector>
using namespace std;
int max(int a, int b , int c)
{
    if(a<b && b>c)
    {
        return b;
    }
    if(c<b && c>a)
    {
        return c;
    }
    if(a>b && a>c)
    {
        return a;
    }
}
int FindMaxPieces(int n,int a,int b, int c)
{
    if(n==0)
    {
        return 0;
    }
    if(n<0)
    return -1;
    // counting maximum of the broken peices
    int ans = max(FindMaxPieces(n-a,a,b,c),FindMaxPieces(n-b,a,b,c),FindMaxPieces(n-c,a,b,c));
    
    return ans+1;
}
int main()
{
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back((rand()%50)* (i+1));
    }
    int a,b,c;
    cin>>a>>b>>c;
    int ans = FindMaxPieces(v.size(),a,b,c);
    cout<<ans<<endl;
    return 0;
}