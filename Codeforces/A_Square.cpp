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
    while (T--) {
        int result =0;
        vector<pair<int,int>>a;
        for(int i=0;i<4;i++)
        {
            int x,y;
            cin>>x>>y;
            pair<int , int>temp;
            temp.first = x;
            temp.second = y;
            a.push_back(temp);

        }
        sort(a.begin(),a.end());
        result = pow(sqrt(pow(a[0].first-a[1].first,2)+(pow(a[0].second-a[1].second,2))),2);
        // for(int i=0;i<a.size()-1;i++)
        // {
        //     if(a[i].first==a[i+1].first)
        //     {
        //     result =pow(sqrt(pow(a[i+1].first-a[i].first,2)+pow(a[i+1].second-a[i].second,2)),2);
        //     break;

        //     }
        // }
        cout<<result<<endl;
    }
    return 0;
}