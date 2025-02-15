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
      unsigned  n , k;
      cin >> n >> k;
      cout << (n|((unsigned)1<<k)) << endl;
    }
    return 0;
}