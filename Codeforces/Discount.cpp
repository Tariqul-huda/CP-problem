#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
     double r = (( double)(a-b)/( double)a)*100;
    //cout<<r<<endl;
    printf("%.6lf\n",r);
    return 0;
}