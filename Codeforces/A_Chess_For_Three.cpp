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
      int a,b,c;
      cin >> a >> b >> c;
      if( a==0 && b==0 && c==0)cout<<0<<endl;
      else if(a == b && b ==c && a==c && a&1 && b&1 && c&1)
      {
        cout<<-1<<endl;
      }
      else
      {
        
      }
    }
    return 0;
}