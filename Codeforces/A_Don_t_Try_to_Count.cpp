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
        int n,m,c;
        c=0;
        cin>>n>>m;
        string s,x;
        cin>>x>>s;
        while(1)
        {
            if(x.find(s)!=string::npos || x.size()>100)break;

            x+=x;
            c++;
        }
        if(x.size()>100)
        cout<<-1<<endl;
        else
        cout<<c<<endl;
        
        // if(x.size()==s.size())
        // {

        // if(x.find(s)!=string::npos)
        // {
        //     cout<<c<<endl;
        // }
        // else
        // {
        // x+=x;c++;

        // }

        // }
        //  if(x.find(s) !=string::npos)
        // cout<<c<<endl;
        // else
        // cout<<-1<<endl;


    }
    return 0;
}