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
#define NOT !=
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    n++;
    while(1)
    {
        string s;
        s = to_string(n);
        if(s[0] NOT s[1] && s[0] NOT s[2] && s[0] NOT s[3] && s[1] NOT s[2] && s[1] NOT s[3] && s[2] NOT s[3])
        {
            cout<<s<<endl;
            return 0;
        }
        n++;
    }
    return 0;
}