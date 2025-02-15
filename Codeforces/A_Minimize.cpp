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
      int a, b;
      cin >> a >> b;
      int c = a;
      int minn = (c-a)+(b-c);
      while(c<=b){
        minn = min((c-a)+(b-c),minn);
        c++;
      } 
      cout<<minn<<endl;
    }
    return 0;
}