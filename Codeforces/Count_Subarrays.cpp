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
      int cc=0;
      for(int i=0;i<n;i++) {
        int j;
        for(j=i;j<n;j++)
        {
            int k;
            bool is= false;
            for( k = i;k<j;k++)
            {
                if(a[k]>a[k+1]){
                    is = true;
                    break;
                }
            }
            if(!is)cc++;
        }
      }
      cout<<cc<<endl;
    }
    return 0;
}