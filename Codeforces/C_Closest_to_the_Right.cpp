#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    while(k--){
        int l = 1,r=n,ans = n+1;
        int x;cin>> x;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid]>=x){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}