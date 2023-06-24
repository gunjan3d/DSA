<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    for(int i=1;i<=a;i++)
    {
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
=======
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    for(int i=1;i<=a;i++)
    {
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
>>>>>>> 31f4055f5dd0999e9923eac60c6e375f2caf569c
}