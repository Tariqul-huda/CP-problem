#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    int result = (int)(log(n)/log(k));
    cout<<result+1<<endl;
    return 0;
}