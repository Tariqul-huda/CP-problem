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
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)cin>>a[i];
      int max = INT_MIN;
      int minn = INT_MAX;
      for(int i=0;i<n;i++)
      {
        if(a[i]>max)
        {
            max = a[i];
        }
        else if(a[i]<minn) minn = a[i];
      }
      cout<<max*minn<<endl;
    }
    return 0;
}