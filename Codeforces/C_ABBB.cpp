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
        string s;
        cin>>s;
        size_t first = s.find("AB");
        size_t second = s.find("BB");
        while(first!=string::npos)
        {
            s.erase(first,2);
            first = s.find("AB");
 
        }
        while(second!=string::npos)
        {
            s.erase(s.find("BB"),2);
            second = s.find("BB");
            
        }
        cout<<s.size()<<endl;
    }
    return 0;
}