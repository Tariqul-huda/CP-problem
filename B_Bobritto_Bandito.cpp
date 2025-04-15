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
     int n,m,l,r;
     cin >> n >> m >> l >>r;
        
        if(n==m)cout<<l<<" "<<r<<endl;
        else{
            int difference = n-m;
            int minn = max(0LL,difference-r);
            int maxx = min(difference,-l);
            int a = l+maxx;
            int b = r - (difference-maxx);
            cout<<a<< " "<<b<<endl; 

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