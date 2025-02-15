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
      unsigned n;
      cin>>n;
      bitset<32>a;
      a = n;
      string s = a.to_string();
      reverse(s.begin(),s.end());
      a = bitset<32>(s);
      cout<<(a.to_ullong())<<endl;
      
    }
    return 0;
}