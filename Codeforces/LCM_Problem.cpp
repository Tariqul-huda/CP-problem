#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
inline int lcm(int a,int b)
{
    return ((a*b)/__gcd(a,b));
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
      int a,b;
      cin >> a >>b;
      cout<<lcm(a,b)<<endl;
    return 0;
}