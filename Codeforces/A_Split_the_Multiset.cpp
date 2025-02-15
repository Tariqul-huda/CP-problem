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
      int n, k;
      cin >> n>>k;
      k-=1;
      int c =0;
      if(n==1)cout<<0<<endl;
      else
      {

      while(n>0)
      {
        n-=k;
        if(n>k)c++;
        else break;
      }
      if(n>1)c+=2;
      else c++;
      cout<<c<<endl;
    }
      }
    return 0;
}