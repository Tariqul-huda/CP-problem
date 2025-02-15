#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
#define modulo 10
int fact(int n)
{
    if(n==0)return 1;
    return (n%modulo*fact(n-1))%modulo;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
      int n; cin >> n;
      cout<<fact(n)<<endl;

    }
    return 0;
}