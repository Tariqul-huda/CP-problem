#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, y;
    cin >> n >> x >> y;
    int a[n][n];
    for(int i=0;i<n;i++)for(int j = 0;j <n;j++)cin>>a[i][j];
    x--;y--;
    //swap row;
    for(int i=0;i<n;i++)
    {
        swap(a[x][i],a[y][i]);
    }
    //swap column

    for(int i=0;i<n;i++) swap(a[i][x],a[i][y]);
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)cout<<a[i][j]<<" ";
    cout<<endl;
    }

    return 0;
}