#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long maxx = -1e18;
    long long maxxx = LLONG_MIN;
    long long sum =LLONG_MIN;
    for(int i=0;i<n;i++)
    {
        maxx = max(a[i],maxx+a[i]);
       
        maxxx = max(maxxx,maxx);

    }
    cout<<maxxx<<endl;
    return 0;
}