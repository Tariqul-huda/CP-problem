#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define endl '\n'
#define int long long
#define LSB(x) ((x)&(-x))
/*------------X------------*/
int joseph(int n){
    int msb = 1<<(__lg(n));
    n -=msb;
    return (n<<1)+1;
}
signed main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    int casE = 1;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        int prev = n;
        while(1){
            cnt++;
            
            if(prev==joseph(prev))break;
            prev = joseph(prev);
        }
        cout<<"Case "<<casE++<<": "<<cnt-1<<" "<<prev<<endl;
        

    }
    

    return 0;
}