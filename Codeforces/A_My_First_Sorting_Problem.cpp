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
      int x,y;
      cin>>x>>y;
      cout<<min(x,y)<<" "<<max(x,y)<<endl;
    }
    return 0;
}