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
      string s;
      cin>>s;
      set<int>a;
      for(int i=0;i<s.size();i++)a.insert(s[i]);
      if(a.size()==1)cout<<"NO"<<endl;
      else
      {
        cout<<"YES"<<endl;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]!=s[i+1])
            swap(s[i],s[i+1]);
        }
        cout<<s<<endl;
      }
    }
    return 0;
}