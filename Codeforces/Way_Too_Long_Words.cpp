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
      if(s.size()<11)
      cout<<s<<endl;
      else 
      cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
    }
    return 0;
}