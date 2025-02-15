#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
 void do_work(int n,int target, bool *a)
 {
    for(int i=target;i<n;i+=target)a[i]=true;
 }

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l,m,j,k,n;
    cin >> l >> m >> j >> k >> n;
    bool tru[n+1]={false};
    do_work(n+1,l,tru);
    do_work(n+1,m,tru);
    do_work(n+1,j,tru);
    do_work(n+1,k,tru);
    int result = 0;
    for(int i=1;i<=n;i++)
    {
        if(tru[i])result++;
    }
    cout<<result<<endl;

    return 0;
}