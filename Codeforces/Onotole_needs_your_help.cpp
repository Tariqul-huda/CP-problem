#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    int result = 0;
    while (T--) {
      int n;
      cin >> n;
      result ^= n;
    }
    cout<<result<<endl;
    return 0;
}