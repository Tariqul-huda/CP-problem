#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){

    int n;
    cin >> n;
    n++;
    int p = 1;
    auto prod = [](int k){
        int r = 1;
        while(k){
            r*=k%10;
            k/=10;
        }
        return r;
    };
    int ans = 0;
    while(n){
        ans  = max(ans,prod(n*p-1));
        n/=10;
        p*=10;
    }
    cout<<ans<<endl;
    return 0;
}

