#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int a[n];
    for(int &i:a)cin >> i;
    int a_max[n];
    int a_min[n];
    a_max[0]=a[0];
    a_min[n-1]=a[n-1];
    for(int i=1;i<n;i++){
        a_max[i]  = max(a_max[i-1],a[i]);
    }
    for(int i=n-2;i>=0;i--){
        a_min[i]=min(a_min[i+1],a[i]);
    }
    int total = 0;
    if(a[0]<a_min[1]){
        total++;
    }
    if(a[n-1]>a_min[n-2])total++;
    for(int i=1;i<n-1;i++){
        if( a[i]<a_min[i+1] and a[i]>a_max[i-1])total++;
    }
    cout<<total<<endl;
    return 0;
}