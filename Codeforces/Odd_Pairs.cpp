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
    while (T--) {
      int n;
      cin >> n;
      int even = n/2;
      int odd = n-even;
      cout<<(even*odd*2)<<endl;
    }
    return 0;
}