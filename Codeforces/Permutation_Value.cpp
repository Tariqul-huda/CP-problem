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
      for(int i=0;i<n;i++)a[i] = i+1;
      do
      {
        for(int i = 0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
      } while (next_permutation(a,a+n));
      
    }
    return 0;
}