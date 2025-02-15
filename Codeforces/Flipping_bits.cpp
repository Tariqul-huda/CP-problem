#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
      unsigned a;
      cin>>a;
      cout<<(~a)<<endl;
    }
    return 0;
}