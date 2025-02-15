#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      int n; cin >> n;
      int neg_count = 0;
      bool is_zero = false;
      for(int i= 0;i<n;i++)
      {
        int x;
        cin >> x;
        if(x<0)neg_count++;
        if(!x)is_zero = true;
      }
      if(is_zero || !(neg_count&1))cout<<0<<endl;
      else cout<<1<<endl;
    }
    return 0;
}