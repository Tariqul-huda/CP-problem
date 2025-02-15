#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    int result = 0;
    while(a<=b)
    {
        result ^= a;
     
        a++;
    }
    cout<<result<<endl;
    return 0;
}
