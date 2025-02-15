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
      int a, b, c;
      cin >> a >> b >> c;
      int result = (c/a)+(c/b)+2;
      cout<<result<<endl; 
    }
    return 0;
}