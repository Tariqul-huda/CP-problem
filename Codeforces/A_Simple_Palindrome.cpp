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
      string s = "aeiou";
      string t = "";
      map<char,int>mp;
      for(int i=0;i<n;i++){
        mp[s[i%s.size()]]++;
      }
      for(auto i:mp){
        for(int j=0;j<i.second;j++){
            cout<<i.first;
        }
      }
      cout<<endl;
    //   for(auto i:mp)cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}