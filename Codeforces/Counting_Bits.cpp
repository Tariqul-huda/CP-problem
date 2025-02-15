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
    vector<int>sum;
    bitset<32>a;
    sum.push_back(1);
    for(int i=2;i<=1000;i++)
    {
        a=i;
        sum.push_back(a.count()+sum[i-2]);
    }

    while (T--) {
    int n;
    cin>>n;
    cout<<sum[n-1]<<endl;  
    }
    return 0;
}