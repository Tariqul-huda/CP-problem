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
      string s,t;
      cin>>s>>t;
      for(int i=0;i<s.size() || i<t.size();i++)
      {
        if(i<s.size() && i<t.size())
        {
            cout<<s[i]<<t[i];
        }
        else if(i<s.size() && i>=t.size())
        {
            cout<<s[i];
        }
        else if(i<t.size() && i>=s.size())
        cout<<t[i];
      }
      cout<<endl;
    }
    return 0;
}