#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>even,odd;
    for(int i=0;i<n;i++)
    {
        int x; cin>> x;
        if(x&1)odd.push_back(x);
        else even.push_back(x);
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    int sum = 0;
    for(auto it:even)
    {
        sum+=(it);
    }
    for(auto it:odd)sum+=it;
   // for(auto it:odd)cout<<it<<endl;
    if(odd.size()&1)
    sum-=*odd.begin();
    cout<<sum<<endl;
    return 0;
}