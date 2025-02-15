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
      cin >> n >> k;
      int a[n];
      for(int i=0;i<n;i++){
        cin >> a[i];
      }
      int man = 0;
      int crrnt = 0;
      for(int i=0;i<n;i++){
        if(a[i]==0 && crrnt){
            man++;
            crrnt--;
        }
        else if(a[i]>=k){
            crrnt+=a[i];
        }
      }
      cout<<man<<endl;
    }
    return 0;
}