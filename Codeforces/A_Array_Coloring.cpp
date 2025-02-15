#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin>>n;
        int cnt = 0;
        while(n--)
        {
            int x;
            cin>>x;
            cnt+=x;
        }
        if(cnt%2)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
    return 0;
}