#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin >> a >> b;
    int c  = 0;
    int prev = a;
    while(prev<=b)
    {
        c++;
        prev = prev*2;
    }
    cout<<c<<endl;
    return 0;
}