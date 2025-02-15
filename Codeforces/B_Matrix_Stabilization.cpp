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
     int n , m;
     cin >> n >>m;
     n+=2 ; m+=2;
     int a[n][m];
     memset(a,0,sizeof(a));
     for(int i=1;i<n-1;i++)
     {
        for(int j = 1;j<m-1;j++)cin >> a[i][j];
     }
     for(int i=1;i<n-1;i++)
     {
        for(int j = 1;j<m-1;j++)
        {
            if(a[i][j]>a[i+1][j] and a[i][j] > a[i-1][j] and a[i][j] > a[i][j+1] and a[i][j] > a[i][j-1])
            {
            int temp1, temp2,temp3, temp4;
            temp1 = a[i+1][j];
            temp2 = a[i-1][j];
            temp3 = a[i][j+1];
            temp4 = a[i][j-1];
            int maxx = max({temp1,temp2,temp3,temp4});
            a[i][j] = maxx;

            }
        }
     }
      for(int i=1;i<n-1;i++)
     {
        for(int j = 1;j<m-1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
     }
     
    }
    return 0;
}