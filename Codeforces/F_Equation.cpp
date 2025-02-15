#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
int result(int x, int n)
{
    int sum = 0;
    int xx = x*x;
    for(int i=2;i<=n;i+=2)
    {
        sum+=xx;
        xx*=x*x;
    }
    return sum;

}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,n;
    cin >> x >> n;
    cout<<result(x,n)<<endl;
    return 0;
}