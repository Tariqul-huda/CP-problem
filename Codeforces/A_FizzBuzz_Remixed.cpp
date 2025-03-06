#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define test  \
    int T, tc = 0;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/


void crack()
{
     int n;
     cin >> n;
     if(n<15){
        if(n==0)cout<<1<<endl;
        else if(n==1)cout<<2<<endl;
        else cout<<3<<endl;
     }
     else{
        int x = n/15;
        int result = x*4;
        if(n%15){
            if(n%15 == 1 or n%15 == 2 or n%15==0)
            result+=n%15;
            
        }
        cout<<result<<endl;
     }
}

int32_t main()
{
    faf auto st = clock();
    test
    {
        //cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}