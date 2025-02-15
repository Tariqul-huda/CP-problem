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
      int a, b , c;
      cin >> a >> b >>c;
      int minn = min({a,b,c});
      int maxx = max({a,b,c});
      set<int>ab;
     // cout<<minn<<" "<<maxx<<endl;
      while(minn<=maxx)
      {
        ab.insert(abs(minn-a)+abs(minn - b) + abs(minn-c));
        minn++;
      }
      cout<<*ab.begin()<<endl;

}
    return 0;
}