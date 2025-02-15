#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; 
    cin >> n;
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j = 1; j<=n;j++)
        {
            for(int k = 1; k <= n;k++)
            {
                int r = __gcd(j,k);
                sum+=(__gcd(r,i));
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}