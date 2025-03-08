#include<bits/stdc++.h>
#define int long long 
using namespace std;

signed main(){
    int n;
    cin >> n;
    int ans = LLONG_MAX;
    
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            if(gcd(i,n/i)==1){
              ans = min(ans,max(i,n/i));
                
            }
        }
    }
    cout<<ans << " "<<n/ans<<endl;
    
    return 0;
}