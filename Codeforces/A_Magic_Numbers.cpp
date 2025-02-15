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
    size_t pos = c.find("144");
    while(pos!=string::npos)
    {
        //c.erase(pos,3);
        c[pos] = 32;
        c[pos+1] = 32;
        c[pos+2] = 32;
        pos = c.find("144");
    }
    pos  = c.find("14");
    while(pos!=string::npos)
    {
         c[pos] = 32;
        c[pos+1] = 32;
        pos = c.find("14");
    }
    set<char>result;
    for(int i=0;i<c.size();i++)
    result.insert(c[i]);
    if((result.size()==2 && *result.rbegin()=='1' && *result.begin()==32) || (result.size()==1 && *result.begin()==32)|| (result.size()==1 && *result.begin()=='1'))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

   // cout<<c<<endl;

    return 0;
}