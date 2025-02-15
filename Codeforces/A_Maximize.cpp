#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
    int n;
    cin>>n;
    int i;
    for( i=n-1;i>=1;i--)
    {
        if(__gcd(i,n)!=1)break;
    }
    if(i!=0)
    cout<<i<<endl;
    else cout<<n-1<<endl;
    }
    return 0;
}