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
      int n,x,y;
      cin >> n;
      cin >> x >> y;
      int cnt = 0;
      
    //   while(n>0){
    //     n-=min(x,y);
    //     cnt++;
    //   }

      cout<<((n%min(x,y))?n/min(x,y)+1:n/min(x,y))<<endl;
    }
    return 0;
}