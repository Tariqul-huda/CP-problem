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
      int pre_sm[n];
      for(int i=0;i<n;i++){
        cin >> a[i];
      }
      pre_sm[0]=a[0];
      for(int i=1;i<n;i++){
        pre_sm[i]=a[i]+pre_sm[i-1];
      }
      if(n==2){
        cout<<a[1]-a[0]<<endl;
      }
      else if(n==3){
            cout<<a[2]-(a[1]-a[0])<<endl;
      }
      else{
        a[n-2]=a[n-2]-a[n-3];
        a[n-2]-=pre_sm[n-4];
        a[n-1]-=a[n-2];
        cout<<a[n-1]<<endl;
      }
    }
    return 0;
}