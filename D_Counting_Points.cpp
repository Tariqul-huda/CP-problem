#include<bits/stdc++.h>
using namespace std;

    // @author : tariq002

#define test  \
    int T, tc = 0;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/


void crack()
{
     int n, m;
     cin >> n >> m;
     vector<pair<int,int>>vp;
     for(int i =0;i<n;i++){
        int x;
        cin >> x;
        vp.push_back({0,x});
     }
     for(int i =0;i<n;i++){
        cin >> vp[i].first;
     }
     sort(vp.begin(),vp.end(),greater<pair<int,int>>());
     


}

int32_t main()
{
    faf auto st = clock();
    test
    {
        //cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}