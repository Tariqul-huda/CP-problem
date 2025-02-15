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
    cin >> n;
    int r;
    if(n&1)
    {
        cout<<(n/2)-n<<endl;
    }
    else
    {
        cout<<n/2<<endl;
    }
    
    return 0;
}