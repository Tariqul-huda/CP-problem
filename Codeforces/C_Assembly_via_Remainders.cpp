#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
const int lim = 1e9;
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      int n;
      cin>>n;
      n--;
      int a[n];
      vector<int>res;
      for(int i=0;i<n;i++)cin>>a[i];
      for(int i=3;i<=lim;i++)
      {
        bool is_found = false;
        for(int j=2;j<i;j++)
        {
            if(i%j==a[0])
            {
                res.push_back(j);
                res.push_back(i);
                is_found = true;
                break;
            }
        }
            if(is_found)break;
      }
 
      for(int i=1;i<n;i++)
      {
        int result = res[res.size()-1];
        int sum = result;
        for(int j = 1;sum%res[res.size()-1]!=a[i];j++)
        {
            sum = result*j+a[i];
            cout<<res[res.size()-1]<<endl;
            
        }
        res.push_back(sum);
      }
    //   for(auto i:res)cout<<i<<" ";
    //   cout<<endl;

    }
    return 0;
}