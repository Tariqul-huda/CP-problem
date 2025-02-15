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
    long long low,high;
    long long c,d,e,sum;
    sum=0;
    vector<long long>ff;
    while (T--) {
    low = LLONG_MAX;
    high = LLONG_MIN;
        int n;
        cin>>n;
        vector<long long>a;
        while(n--)
        {
            int b;
            cin>>b;
            a.push_back(b);
        }
        //sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        {
            if((i+1)%3==0)
            {
                ff.push_back(sum);
                sum=0;
            }
            else
            {
                sum+=a[i];
            }
        }
        for(auto i:ff)
        {
            cout<<i<<" ";
        }
        cout<<endl;

        
    }
    return 0;
}