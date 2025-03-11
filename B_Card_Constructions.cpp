#include<bits/stdc++.h>
using namespace std;
#define int long long
bool ans(int n, int k){
    return ((n*(3*n+1))/2)<=k;
}
int formula(int n){
    return ((n*(3*n+1))/2);
}
signed main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
 
        int cnt = 0;
         while(n>0){
            int l = 1,r = 2*n;
            int anss = -1;
            while(l<=r){
                int mid = (l+r)/2;
                if(ans(mid,n)){
                    anss = mid;
                    l = mid+1;
                   
                } 
                else r = mid-1;
            }
            if(anss<0)break;
            cnt++;
            n -=(formula(anss));
         }
         cout<<cnt<<endl;


    }
    return 0;
}