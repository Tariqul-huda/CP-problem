#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int pre_sum[n]={a[0]};
    for(int i=1;i<n;i++)pre_sum[i]=pre_sum[i-1]+a[i];
    
    int T;
    cin >> T;
    while (T--) {
      int l,r;
      cin >> l >> r;
      if(l)
      cout<<pre_sum[r]-pre_sum[l-1]<<endl;
        else cout<<pre_sum[r]<<endl;
    }
    return 0;
}#include "bits/stdc++.h"
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
      
    }
    return 0;
}