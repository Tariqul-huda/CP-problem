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
      int n,m,q;
      cin >> n >> m >> q;
      int left,right;
      cin >> left >> right;
      int current;
      cin >> current;
      if(right<left)swap(left,right);
      int step = 0;
      if(current<left){
        step = left -1;
      }
      else if(current>right)step = n-right;
      else{
        step = max(left-current-1,right-current-1);
      }
      cout<<((step)?step:0)<<endl;

    }
    return 0;
}