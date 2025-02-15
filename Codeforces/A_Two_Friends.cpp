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
    cin>>n;
    vector<int>mp,mp2;
    mp.push_back(-1);mp2.push_back(-1);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
       // mp[i]=x;
        mp.push_back(x);

    }
    bool is_found = false;

    for(int i=1;i<=n;i++)
    {
        if(i==mp[mp[i]])
        
        is_found = true;
    }
    if(is_found)cout<<2<<endl;
    else cout<<3<<endl;
    }
    return 0;
}