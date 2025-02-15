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
    int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    
    int j=0;
    bool found;
    for(int i=0;i<m;i++)
    {
         found = false;
        for(;j<n;j++)
        {
            if(a[j]==b[i]){j++;found = true;break;}
        }
        if(!found)
        {
            cout<<"NO"<<endl;
            found = false;
            break;
        }
    }
    if(found)cout<<"YES"<<endl;
    return 0;
}