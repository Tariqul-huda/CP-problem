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
    map<pair<int,int>,string>mp;
    while (T--) {
        int x,y;
        string s;
        cin >> x >> y >> s;
        mp[{x,y}]=s;
    }
    int q;
    cin >> q;
    while(q--){
        int x,y;
        cin >> x >> y;
        cout<<mp[{x,y}]<<endl;
    }
    return 0;
}