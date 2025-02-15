#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int pre_xor[n] = {a[0]};
    for(int i=1;i<n;i++) pre_xor[i] = pre_xor[i-1] ^ a[i];
    while(q--)
    {
        int l , r;
        cin >> l >> r;
        l--;r--;
        if(!l)
        {
            cout<<pre_xor[r]<<endl;
        }
        else
        {
            cout<<(pre_xor[r]^pre_xor[l-1])<<endl;
        }
    }
    return 0;
}