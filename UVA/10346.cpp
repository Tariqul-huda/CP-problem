#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);

    int n,k;
    while(cin>>n>>k){
        int cnt = n;
        int temp =n;
        while(temp>1 and temp>=k){
            cnt+=(temp/k);
            int r = temp%k;
            temp/=k;
            temp+=(r);
            
        }
        cout<<cnt<<endl;
    }

    return 0;
}