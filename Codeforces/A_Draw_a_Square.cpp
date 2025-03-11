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
     int l,r,d,u;
     cin >> l >> r >> d  >> u;
     int dist1 = u*u+r*r;
     int dist2 = r*r+d*d;
     int dist3 = d*d + l*l;
     int dist4 = l*l + u*u;
     int dist5 = u*u+d*d;
     int dist6 = l*l + r*r;
     set<int>ab = {dist1,dist2,dist3,dist4,dist5,dist6};
     if(ab.size()==1)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

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