#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
     string s,t;
     cin >> s >> t;
     swap(s[0],t[0]);
     cout<<s<<" "<<t<<endl; 
    }
    return 0;
}