#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T,k;
    cin >> T >> k;
    int sum = 0;
    while (T--) {
        int x;
        cin >> x; 
      sum+=(x%k==0);
    }
    cout<<sum<<'\n';
    return 0;
}