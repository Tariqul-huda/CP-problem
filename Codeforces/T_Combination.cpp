#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
int nc[31][31];
int ncr(int n, int r)
{
    if(n<r or r<0 or n<0)return 0;
    if(n==0)return 1;
    if(nc[n][r]<0)
    {
        nc[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
        nc[n-r][r] = ncr(n-1,r)+ncr(n-1,r-1);
        return nc[n][r];
    }
    else return nc[n][r];
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , r ;
    for(int i=0;i<31;i++)for(int j=0;j<31;j++)nc[i][j]=-1;
    cin >> n >> r;
    cout<<ncr(n,r)<<endl;
    return 0;
}