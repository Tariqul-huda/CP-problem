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
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int as;
            cin>>as;
            a.push_back(as);
        }
        sort(a.begin(),a.end());
        int k;
        long long sum = 0;
        for(k=2;k<a.size();k++)
        {
            for(int i=0,j=1;j<k;i++,j++)
            {
                    sum+=__gcd(a[i],a[j]);
            }

        }
        cout<<sum<<endl;

    }
    return 0;
}