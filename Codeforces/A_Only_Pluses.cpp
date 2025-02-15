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
      int a, b, c;
      cin >> a >> b >> c;
      set<int>ab;
      int temp1,temp2,temp3;
      temp1 = a; temp2 = b; temp3 = c;
      for(int i=1;i<=5;i++)
      {
 
        cout<<"For "<<i<<endl;
        for(int j=5-i;j<=5;j++)
        {
  
            for(int k =1;k<=5;k++)
            {

                ab.insert((temp1+i)*(temp2+5-i)*(temp3+5-(i+j)));
                cout<<(temp1+i)*(temp2+5-i)*(temp3+5-(i+j))<<endl;
            }
        }
      }
     // cout<<*ab.end()<<endl;
    }
    return 0;
}