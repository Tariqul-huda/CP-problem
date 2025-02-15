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
      int n;
      cin >> n;
      int a[n];
      for(int i=0;i<n;i++){
        cin >> a[i];
      }
      int max=INT_MIN;
      int max_pos = 0;
      for(int i=0;i<n;i++){
        if(a[i]>=max){
            max = a[i];
            max_pos = i;
            if(i^1)max_pos = i;
        }
      }
      if(max_pos^1){
        cout<<max+ceil(n/2.00)<<endl;
      }
      else{
        cout<<max+(n/2)<<endl;
      }
    }
    return 0;
}