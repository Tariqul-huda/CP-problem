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
        int a[n];
        int x;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=abs(x);
        }
        cout<<sum<<endl;

    }
    return 0;
}