#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    int i =0;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    bool is=false;
    while(true)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]&1)
            {
                cout<<i<<endl; is = true;
                break;
            }
            else
            a[j]/=2;
        }
        if(is)break;
        i++;
    }

    return 0;
}