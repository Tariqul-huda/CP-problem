#include<bits/stdc++.h>
using namespace std;
long long n,w,h;
bool calculation(long long x){
    long long a = x/h;
    long long b = x/w;
    if(b==0)return false;
    return a>=(double)n/b;
    
}
const long long max_ll = 1e14;
int main(){
    cin >> w >> h >> n;
    long long l=1,r=max_ll,ans=0;
    while(l<=r){
        long long mid = (l+r)/(2*1LL);

       // cout<<l+r<<endl;
        if(calculation(mid)){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}