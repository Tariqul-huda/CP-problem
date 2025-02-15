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
    string c;
    cin>>c;
    int zeros[c.size()];
    int ones[c.size()];
    int o,z,countt;
    bool flag= true;
    o=z=0;
    countt=1;
    for(int i=0;i<c.size();i++)
    {
        if(c[i]=='0')
        {
            zeros[z++]=i;
        }
        else
        ones[o++]=i;
    }
    for(int i=0;i<z-1;i++)
    {
        if(zeros[i]+1==zeros[i+1])
        {
            countt++;
            if(countt>=7)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
        countt=1;
    }
    for(int i=0;i<o-1;i++)
    {
        if(ones[i]+1==ones[i+1])
        {
        countt++;
        if(countt>=7)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        }
        else
        countt=1;
    }
    cout<<"NO"<<endl;
    
    

    return 0;
}