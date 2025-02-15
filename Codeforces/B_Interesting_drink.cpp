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
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int k;
    cin >> k;
    while(k--){
        int x;
        cin >> x;
        int l = -1,r=n;
        while(l+1<r){
            int mid = (l+r)/2;
            if(a[mid]<=x){
                l = mid;
            }
            else r = mid;
        }
        
        cout<<l+1<<endl;


        // int res = (lower_bound(a,a+n,x)-a)+1;

        // cout<<res-(a[res-1]>x)<<endl;
       

    }

    return 0;
}