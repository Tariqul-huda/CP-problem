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
      int n;
      cin >> n;
      if(n&1)
      {
        cout<<"YES"<<endl;
      }
      else
      {
        if(log2(n)==(long long)log2(n))
        cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
      }
    }
    return 0;
}