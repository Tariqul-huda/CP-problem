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
        vector<int>x,y;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        x.push_back(a);
        x.push_back(b);
        y.push_back(c);
        y.push_back(d);
    sort(x.begin(),x.end(),greater<int>());
    sort(y.begin(),y.end(),greater<int>());
        if(x[0]<y[1] || y[0]<x[1])
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        
    }
    return 0;
}