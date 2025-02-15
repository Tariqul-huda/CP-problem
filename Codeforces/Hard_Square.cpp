#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    //first row
    for(int i=1;i<=n;i++)
    cout<<'*'<<' ';
    cout<<endl;
    //second to last-1 row

    for(int i=2;i<=n-1;i++)
    {
        
        for(int j=1;j<=n;j++)
        {
            if(j==1 || j==n)cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    cout<<'*'<<' ';
    cout<<endl;


    return 0;
}