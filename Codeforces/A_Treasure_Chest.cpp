#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int x,y,k,diff,timee;
        cin>>x>>y>>k;
        diff = abs(x-y);
        if(x<y)
        {
                
            if(k>=diff)
            {
            timee = x+diff;
            cout<<timee<<endl;
            }
            else
            {
                x+=k;
                timee = x+2*abs(x-y);
                cout<<timee<<endl;
            }

        }
        else if(x>y)
        {
            timee = y+abs(x-y);
            cout<<timee<<endl;
        }
    }
    return 0;
}