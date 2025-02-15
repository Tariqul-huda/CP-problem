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
      set<int>s;
      map<int,int>mp;
      for(int i=0;i<n;i++){
        int x;
        cin >> x;
        mp[x]++;
        s.insert(x);
      }
      int sizee = s.size();
      // for(auto &i:mp){
      //   if(i.second>1)i.second--;
      // }

      int double_count = INT_MIN;
      int double_c = 0;
      
      for(auto i:mp){
        if(i.second>double_count){
          double_count=i.second;
          double_c = i.first;
          
        }
      }
      if(mp[double_c]==sizee)cout<<mp[double_c]-1<<endl;
      else if(mp[double_c]>sizee)cout<<min(mp[double_c]-1,sizee)<<endl;
      else cout<<min(sizee-1,mp[double_c])<<endl;      


    }
    return 0;
}