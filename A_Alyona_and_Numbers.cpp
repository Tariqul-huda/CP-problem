#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){

    int n,m;
    cin >> n >> m;
    long long ans = 0;
    int a[5]= {0};
    int b[5] = {0};
    for(int i =1;i<=n;i++){
        a[i%5]++;
    }
    for(int i=1;i<=m;i++)b[i%5]++;
    ans +=(a[0]*b[0]);
    ans+=(a[1]*b[4]);
    ans +=(a[4]*b[1]);
    ans +=(a[2] * b[3]);
    ans +=(a[3] * b[2]);


    cout<<ans<<endl;
    return 0;
}
