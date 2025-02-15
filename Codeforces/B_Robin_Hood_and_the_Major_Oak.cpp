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
      int n,k;
      cin >> n >> k;
      int r = n-k+1;
      int odd_c = 0;
     odd_c = (n%2)?n/2+1:n/2;
      odd_c = odd_c-(r/2);
      if(odd_c%2==0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

    }
    return 0;
}