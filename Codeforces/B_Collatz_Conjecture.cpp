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
      int x, y, k;
      cin >> x >> y >> k;
      while(k)
      {
        int need_k = (ceil((float)x/y)*y)-x;

        if(need_k>k)
        {
            // cout<<need_k<<endl;

            // cout<<k<<endl;
            cout<< x + k<<endl;
            break;
        }
        else
        {
            x += need_k;
            k -= need_k;
          //  cout<<k<<endl;
            while(x%y==0)
            {
            x /=y;
            //cout<<x<<endl;

            }
            if(!k)cout<<x<<endl;
            //cout<<x <<" "<<k<<endl;
          //  cout<<need_k<<endl;
            
        }
       // k--;
      }
      
    }
    return 0;
}