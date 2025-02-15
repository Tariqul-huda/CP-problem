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
      cin >> n;
      int num_1 = 0;
      int prod_sum = 0;
      for(int i=0;i<n;i++)
      {
        int x; 
        cin >> x;
        if(x==0)
        {
            prod_sum +=((num_1*(num_1+1))/2);
           // cout<<<<endl;
            num_1 =0;
        }
        else num_1++;
        if(i+1==n && x&1)
        {
            prod_sum +=((num_1*(num_1+1))/2);
        }
      }
      cout<<prod_sum<<endl;
    }
    return 0;
}