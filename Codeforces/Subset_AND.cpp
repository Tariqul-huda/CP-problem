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
      int n , k ;
      cin >> n >> k;
      int result; cin >> result;
      for(int i = 1;i<n;i++)
      {
        int x; cin >> x;
        result &= x;
      }
      if(result<k)
      cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}