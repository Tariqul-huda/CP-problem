#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
/*------------X------------*/

signed main()
{
    ios_base::sync_with_stdio(false);
    
    int a,b,k;
    cin >> a >> b >> k;
    int j = 2;
    int cc = 0;
    while(true){
        if(cc==k)break;
        if(a%j==0 or b%j == 0)cc++;
        j++;
    }
    cout<<j-1<<endl;

    return 0;
}