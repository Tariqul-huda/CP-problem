#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/
const int N = 1e6+7;
bool prime[N];
void sieve(){
    prime[0]=prime[1]=true;
    for(int i=2;i<N;i++){
        if(!prime[i]){
            for(int j=i*2;j<N;j+=i){
                prime[j]=true;
            }
        }
    }
}
bool solve(int x){
    int l=2,r=x-1;
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        
        if(mid != 0 && x % mid == 0 && (x / mid) % mid == 0){
            ans = mid;
            break;
        }
        else if(mid*mid >x){
            r = mid-1;
        }
        else l= mid+1;
}
cout<<ans<<endl;
return (x/(ans*ans))==1 and x!=1 and !prime[ans];

}
signed main()
{
    ios_base::sync_with_stdio(false);
    sieve();
    int n;
    cin >> n;
    int a[n];
    for(int &i:a)cin >> i;
    for(int i=0;i<n;i++){
        if(solve(a[i])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}