#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
bool cmp(pair<int,int>&a, pair<int,int>&b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a.first<=b.first;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      vector<pair<int,int>>s;
      int q;
      cin >> q;
      while(q--){
      int x,y;
      cin >> x >> y;
      s.push_back({x,y});
      sort(s.begin(),s.end(),cmp);
      }
      for(auto i:s){
        cout<<i.first<<" "<<i.second<<endl;
      }

    }
    return 0;
}