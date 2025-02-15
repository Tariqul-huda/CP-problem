#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin>> n >>k;

    cout<<(n&(~(((1<<(k))-1))))<<endl;
    return 0;
}