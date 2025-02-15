#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9+7;
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i =0;i < n; i++)cin >> a[i];
    int result = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            result  =result%mod+(((a[i] % mod)*(a[j]%mod))%mod)%mod;
        }
    }
    cout<<result<<endl;
    return 0;
}