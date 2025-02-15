#include<bits/stdc++.h>
using namespace std;
int n,k;
bool is_found(int *a,int n,int x){
    int ans = 0;
    bool ff = false;
    for(int i=0;i<n;i++){
        ans++;
        int idx  = lower_bound(a,a+n,a[i]+x)-a;
        if(a[idx]==a[i]+x)ff = true;
        
        
        i = idx-1;
        
    }
  // cout<<ans<<endl;
    return ans>=k and ff;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int l = 1,r=1e5,ans=0;
        while(l<=r){
            int mid = (l+r)/2;
           // cout<<mid<<endl;
            if(is_found(a,n,mid)){
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        
        cout<<ans<<endl;
     //  cout<< boolalpha<<is_found(a,n,4);
    }
    return 0;
}