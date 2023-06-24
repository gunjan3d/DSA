<<<<<<< HEAD
#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    for(int i=1;i<= row;i++)
    {
        for (int j = 1; j <= col; j++)
        {
            /* code */
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    char c ='A';
    for(int i=1;i<= row;i++)
    {
            c = c+i-1;

        for (int j = 1; j <= col; j++)
        {
            /* code */
            cout<<c<<" ";
        }
        cout<<endl;
        
    }
    return 0;
=======
#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    for(int i=1;i<= row;i++)
    {
        for (int j = 1; j <= col; j++)
        {
            /* code */
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    char c ='A';
    for(int i=1;i<= row;i++)
    {
            c = c+i-1;

        for (int j = 1; j <= col; j++)
        {
            /* code */
            cout<<c<<" ";
        }
        cout<<endl;
        
    }
    return 0;
>>>>>>> 31f4055f5dd0999e9923eac60c6e375f2caf569c
}