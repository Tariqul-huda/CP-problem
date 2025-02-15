#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
      int n;
      cin >> n;
      vector<int>ab;
      for(int i=0;i<n;i++){
        int x;
        cin >> x;
        ab.push_back(x);
      }
      int k;
      cin >> k;
      ab.erase(ab.begin()+(k-1));
      int a,b;
      cin >> a >> b;
      ab.erase(ab.begin()+(a-1),ab.begin()+b-1);
      cout<<ab.size()<<endl;
      for(auto i:ab)cout<<i<<" ";

    return 0;
}