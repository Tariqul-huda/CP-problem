#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int b,r,k;
        cin>>b>>r>>k;
        if(k%b==r)
        {
            cout<<k<<endl;
            continue;
        }
        else
        {
            int rem = k%b;
            rem-=r;
            if(rem<0)
            {
                rem = b+rem;
                //cout<<rem<<endl;
                k-=rem;
                cout<<k<<endl;

            }
            else
            {
                k-=rem;
                cout<<k<<endl;
            }

        }
    }
    return 0;
}