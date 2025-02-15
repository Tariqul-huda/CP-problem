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
    map<string,int>mp;
    while (T--) {
      int x ,y;
      string s;
        cin >> x >> s;
        if(x==1)cin >> y;

        //for(auto i:mp)cout<<i.first<<endl;
        switch (x)
        {
        case 1/* constant-expression */:
            /* code */
            mp[s]+=y;

            break;
        case 2:
        mp[s]= 0;
        break;
        case 3:
        cout<<mp[s]<<endl;
        break;

        }

    }
    return 0;
}