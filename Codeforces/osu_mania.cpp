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
      stack<int>ab;
      for(int i=1;i<=n;i++){
        for(int j =1;j<=4;j++){
            char c;
            cin >> c;
            if(c=='#')ab.push(j);
        }
      }
      while(!ab.empty()){
        cout<<ab.top()<<" ";
        ab.pop();
      }
      cout<<endl;
    }
    return 0;
}