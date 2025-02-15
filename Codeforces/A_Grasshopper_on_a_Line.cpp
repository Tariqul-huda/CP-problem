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
        int a,b;
        cin>>a>>b;
        if(a%b)
        {
            cout<<1<<endl;
            cout<<a<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<a-1<<" "<<1<<endl;
        }
    }
    return 0;
}