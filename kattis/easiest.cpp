#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

bool sum(int n,int m,int k){
    int temp = n*m;
    int ans = 0;
    while(temp){
        ans +=(temp%10);
        temp/=10;
    }
    return ans == k;
}
signed main()
{
    ios_base::sync_with_stdio(false);

    const int limit =1e13;
    int n;
    while(1){
        cin >> n;
        if(n==0)break;
        int cnt = 0;
        int temp = n;
        while(temp){
            cnt+=(temp%10);
            temp/=10;
        }
        for(int i =11;i<=limit;i++){
            if(sum(n,i,cnt)){
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}