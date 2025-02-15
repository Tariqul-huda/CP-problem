#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
void solve()
{
      int n;
      cin >> n;
      //cout<<n<<endl;
    
      int target = floor(log2(n))+1;
      cout<<target<<endl;
      for(int i=1;i<target;i++)
      {
        //cout<<i<<endl;
        bitset<32>a;
        // if(!(n&(1<<i)) and (n&(1<<i-1)))
        // {
        //        a = n;
        //     cout<<"Before 1 : "<<a<<endl;
        //     n |=(1<<i);
        //     n ^=(1<<(i-1));
        //     a = n;
        //     //cout<<i<<" "<<i-1<<endl;
        //     cout<<"After 1 : "<<a<<endl;
        // }
         if((n&(1<<i)) and !(n&(1<<i-1)))
        {
        
            a = n;
            cout<<"Before 2 : "<<a<<endl;
            n ^=(1<<i);
            n |=(1<<(i-1));
            a = n;
            cout<<"After 2 : "<<a<<endl;
           // cout<<i<<" "<<i-1<<endl;
        }
      }
      cout<<n<<endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}