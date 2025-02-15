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
      int l,r;
      cin >> l >> r;
      int count = 1;
      int dif = 1;
        while(l<=r){
            count++;
            l+=dif;
            dif++;
        }
        cout<<count-1<<endl;
    }
    return 0;
}