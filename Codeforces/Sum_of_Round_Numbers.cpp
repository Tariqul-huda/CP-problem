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
      cin >> s;
      int n = s.size()-count(s.begin(),s.end(),'0');
      cout<<n<<endl;
      for(int i=0;i<s.size();i++)
      {
        if(s[i]!='0')
        {
            cout<<s[i];
            for(int j=i+1;j<s.size();j++)
            cout<<'0';
        cout<<" ";
        }
      }
      cout<<endl;
    }
    return 0;
}