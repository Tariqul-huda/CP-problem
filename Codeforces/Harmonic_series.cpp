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
    long double sum  = 0;
    for(int i=1;i<=n;i++)
    {
        sum+=(1.00/i);
    }
    
    printf("%.4Lf\n",sum);
    return 0;
}