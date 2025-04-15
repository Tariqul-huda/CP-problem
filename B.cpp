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

const int limit = 1e-6;
/*------------X------------*/


void crack()
{
     int n,k;
     cin >> n >> k;
     int d,x,y;
     cin >> d >> x >> y;
     if(n<=k){
        cout<<(long double)n/max(x,y)<<endl;
     }
     else{
        long double l,r;
        l = 1,r = d-x;
        while(fabs(l-r)>limit){
            int mid = (l+r)/2;
            if(ans(mid))
        }
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