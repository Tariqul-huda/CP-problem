#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<char,int>mp;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)mp[s[i]]++;
    for(auto i:mp)
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }
    return 0;
}