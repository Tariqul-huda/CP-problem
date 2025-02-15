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
    string s;
    set<char>rs;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<s.size();i++)
    rs.insert(s[i]);
    if(rs.size()==26)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

    return 0;
}