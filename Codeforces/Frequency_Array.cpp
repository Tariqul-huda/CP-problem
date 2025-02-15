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
    int b[100001]={0};
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(int i=1;i<=m;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}