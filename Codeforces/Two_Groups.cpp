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
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0;i<n;i++)
    {
        int x; cin >> x;
        if(x<0)sum2+=x;
        else sum1+=x;
    }
    cout<<abs(abs(sum1)-abs(sum2))<<endl;
      
    }
    return 0;
}