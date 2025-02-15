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
      int a,b;
      cin >> a >> b;
      cout<<((a%b!=0)*(b*((a+b-1)/b)-a))<<endl;
    }
    return 0;
}