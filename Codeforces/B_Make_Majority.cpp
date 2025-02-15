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
      string s;
      cin >> s;
      if(s[0]=='1' && s[s.size()-1]=='1')cout<<"Yes"<<endl;
      else cout<<"No"<<endl;

    }
    return 0;
}