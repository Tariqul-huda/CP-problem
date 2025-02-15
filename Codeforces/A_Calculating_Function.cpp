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
long long bin_power(long long a,long long p)
{
    long long result = 1;
    while(p)
    {
        if(p&1)
        result*=a;
        a*=a;
        p>>=1;

    }
    return result;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,odd,even;
    cin>>n;
    odd = bin_power((n+1)/2,2);
    n-=(n+1)/2;
    even = n*(n+1);
    cout<<even-odd<<endl;

    
    return 0;
}