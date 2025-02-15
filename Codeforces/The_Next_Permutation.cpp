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
      int cas;
      string s;
      cin >> cas >> s;
      if(next_permutation(s.begin(),s.end()))
      {
        cout<<cas<<" "<<s<<endl;
      }
      else
      cout<<cas<<" "<<"BIGGEST"<<endl;
    }
    return 0;
}