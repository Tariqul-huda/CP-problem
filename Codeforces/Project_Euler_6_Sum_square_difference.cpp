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
     cin >> n;
     
     cout<<(abs(((n*(n+1))/2)*((n*(n+1))/2)-((n*(n+1)*(2*n+1))/6)))<<endl; 
    }
    return 0;
}