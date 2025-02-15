#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n-1;i++){
        int x;
        cin>>x;
        sum+=x;
 
    }

    int r = ((n*(n+1))/2)-sum;
    cout<<r<<endl;
    return 0;
}