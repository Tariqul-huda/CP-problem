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
        int x,n,f;
        cin>>n>>x;
        int  minn= INT_MIN;
        vector<int>a;
        a.push_back(0);
        while(n--)
        {
            cin>>f;
            a.push_back(f);
        }
        for(int i=0;i<a.size()-1;i++)
        {
            int temp = abs(a[i]-a[i+1]);
            if(temp>minn)
            minn = temp;
        }
        if(minn<2*abs((a[a.size()-1]-x)))
        minn = abs(2*(a[a.size()-1]-x));
        cout<<minn<<endl;

    }
    return 0;
}