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
    bool h,e,l,o,l2;
    h=e=l=o=l2=false;
    short countt = 0;
    string c;
    cin>>c;
    for(int i=0;i<c.size();i++)
    {
                if(c[i]=='h')
        {
            h=true;
        }
        else if(c[i]=='e' && h)
        {
        e=true;
        countt = 0;

        }
        else if(c[i]=='l' &&h&&e)
        {
            countt++;
            l=true;
            if(countt>=2)
            l2=true;
        }
        else if(c[i]=='o' && h && e&& l && l2)
        o=true;
    }
    if(h&e&l&l2&o)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

    return 0;
}
