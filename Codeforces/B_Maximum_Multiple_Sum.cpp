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
      if((n/2)>(n/3))
      {
        cout<<2<<endl;
      }
      else cout<<3<<endl;
    }
    return 0;
}