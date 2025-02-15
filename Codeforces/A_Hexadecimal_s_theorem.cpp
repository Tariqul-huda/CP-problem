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
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<0<<" "<<0<<" "<<0<<endl;
        return 0;
    }
    else if(n==1)
    {
    cout<<0<<" "<<0<<" "<<1<<endl;
    return 0;

    }
    if(n==2)
    {
        cout<<0<<" "<<1<<" "<<1<<endl;
        return 0;
    }

    vector<int>a;
    int fact1 = 0;
    int fact2 = 1;
    a.push_back(0);
    while(fact2!=n)
    {
        int fact3 = fact1+fact2;
        fact1 = fact2;
        fact2 = fact3;
        a.push_back(fact1);
        //cout<<fact1<<" "<<fact2<<endl;
    }
    // for(auto i:a)
    // cout<<i<<" ";
    cout<<a[a.size()-4]<<" "<<a[a.size()-3]<<" "<<a[a.size()-1]<<endl;
    return 0;
}