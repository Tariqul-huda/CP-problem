#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n,q;
    while(cin >> n >> q)
    {
    map<int,vector<int>>mp;
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        mp[x].push_back(i);
    }
    int cc= 1;
    while(q--){
        int k,v;
        cin >> k >> v;
       // cout<<cc++<<" ";
        if(k>mp[v].size())cout<<0<<endl;
        else cout<<mp[v][k-1]<<endl;
    }

    }

    return 0;
}