#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9+7;
long long bin_pow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int result = 0;
    //cout<<bin_pow(2,3)<<endl;
    for(int i=1;i<=n;i++)
    {
        result = (result+ bin_pow(i,k,mod))%mod;
    }
    cout<<result<<endl;
    return 0;
}