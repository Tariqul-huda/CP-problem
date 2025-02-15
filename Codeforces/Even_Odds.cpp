#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    int odd_number = (n+1)/2;
    int even_number = n - odd_number;
    if(m>odd_number)
    {
        m = m-odd_number;
        cout<<2*m<<endl;
    }
    else
    {
        cout<<2*m-1<<endl;
    }

    return 0;
}