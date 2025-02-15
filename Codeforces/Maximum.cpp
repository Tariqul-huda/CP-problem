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
    set<int>a;
    cin>>n;
    for(int i=0;i<n;i++){int x;cin>>x;a.insert(x);}
    cout<<*a.rbegin()<<endl;
    return 0;
}