#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>a[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}