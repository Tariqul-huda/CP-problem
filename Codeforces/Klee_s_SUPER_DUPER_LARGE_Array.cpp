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
      int n, k;
      cin >> n >> k;
      int total = (n*(2*k+(n-1)))/2;
      int last = k+n-1;
      total  -=k;
      int minn = LLONG_MAX;
       // cout<<total<<endl;
      for(int i= k+1;i<last;i++){
        minn = min(minn,abs(k-total));
        k+=i;
        total-=i;
      }
     cout<<minn<<endl;
}
    return 0;
}