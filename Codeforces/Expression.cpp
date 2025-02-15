#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    int result1,result2,result3,result4;
    cin >> a >> b >>c;
    result1=a+b+c;
    result2 = a*(b+c);
    result3 = a*b*c;
    result4 = (a+b)*c;
    cout<<max({result1,result2,result3,result4})<<endl;
    return 0;
}